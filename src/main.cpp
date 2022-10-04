#include <string>
#include <sstream>
#include <vector>
#include <array>
#include <memory>
#include <iostream>
#include "inc/URLShortenizer.hpp"
#include "inc/ShortenAmazonURL.hpp"

int main(const int argc, const char * const * const argv){
    if(argc < 2){
        std::cout << "Usage:" << std::endl
        << "surl [url]" << std::endl;
        return 1;
    }

    std::array<std::shared_ptr<URLShortenizer>, 1> shortenizerArray;
    shortenizerArray[0] = std::make_unique<AmazonURLShortenizer>();
    
    if(![&]{
        std::optional<std::string> res;
        for(const auto& p: shortenizerArray){
            if(res = p->Shorten(argv[1])){
                std::cout << res.value() << std::endl;
                return true;
            }
        }
        return false;
    }()){
        std::cout << "変換できないURLです" << std::endl;
        return 1;
    }
    return 0;
}