#ifndef SHORTEN_AMAZON_URL_HPP
#define SHORTEN_AMAZON_URL_HPP

#include "URLShortenizer.hpp"
#include <string>
#include <filesystem>
#include <optional>

namespace Constants{
    namespace Amazon{
        inline const std::string PROTOCOL  = "https"   ;
        inline const std::string FQDN      = "www.amazon.co.jp"  ;
        inline const std::string ROOT_PATH = PROTOCOL + "://" + FQDN;
    }
}

class AmazonURLShortenizer: public URLShortenizer{
public:
    std::optional<std::string> Shorten(const std::string& url) override;
};

#endif //SHORTEN_AMAZON_URL_HPP