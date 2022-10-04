#ifndef URL_SHORTENIZER_HPP
#define URL_SHORTENIZER_HPP

#include <string>

class URLShortenizer{
public:
    virtual std::string Shorten(const std::string& url) = 0;
};

#endif //URL_SHORTENIZER_HPP
