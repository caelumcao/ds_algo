#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Implement strStr", "[strStr]")
{
    Solution s;

    REQUIRE(s.strStr("", "abc") == -1);
    REQUIRE(s.strStr("abc", "") == 0);
    REQUIRE(s.strStr("hello", "ll") == 2);
    REQUIRE(s.strStr("aaaaa", "bba") == -1);
    REQUIRE(s.strStr("a", "a") == 0);
}