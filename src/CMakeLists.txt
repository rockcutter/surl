add_library(URLShortenizer STATIC ShortenAmazonURL.cpp)
target_include_directories(URLShortenizer PUBLIC ${PROJECT_SOURCE_DIR})