#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;
    SECTION("1")
    {
        REQUIRE(s.decodeString("3[a]2[bc]") == "aaabcbc");
    }

    SECTION("1")
    {
        REQUIRE(s.decodeString("3[a2[c]]") == "accaccacc");
    }

    SECTION("1")
    {
        REQUIRE(s.decodeString("2[abc]3[cd]ef") == "abcabccdcdcdef");
    }

    SECTION("1")
    {
        REQUIRE(s.decodeString("abc3[cd]xyz") == "abccdcdcdxyz");
    }
}