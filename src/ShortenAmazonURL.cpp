#include "inc/ShortenAmazonURL.hpp"
#include <optional>
#include <iostream>

std::optional<std::string> AmazonURLShortenizer::Shorten(const std::string& url){
    //amazon urlか?
    if(!url.starts_with(Constants::Amazon::ROOT_PATH)){
        return std::nullopt;
    }

    auto result = Constants::Amazon::ROOT_PATH;

    //dpかgpで始まる部分を探す なければnulloptを返す
    auto identifierPosition = url.find("/dp/");
    if(identifierPosition == std::string::npos){
        identifierPosition = url.find("/gp/");
        result += "/gp";
    }else{
        result += "/dp";
    }
    if(identifierPosition == std::string::npos){
        return std::nullopt;
    }

    // "/dp/" "/gp/"の文字列の長さ
    identifierPosition += 4;

    //商品番号文字列の最後の要素の位置を得る
    auto productIdentifierEndPosition = url.find("/", identifierPosition);
    if(productIdentifierEndPosition > url.find("?", identifierPosition)){
        productIdentifierEndPosition = url.find("?", identifierPosition);
    }

    //substr
    return result + "/" + url.substr(identifierPosition, productIdentifierEndPosition - identifierPosition);
}