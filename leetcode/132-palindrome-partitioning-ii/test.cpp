#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        REQUIRE(s.minCut("aab") == 1);
    }

    SECTION("2")
    {
        REQUIRE(s.minCut("a") == 0);
    }
}