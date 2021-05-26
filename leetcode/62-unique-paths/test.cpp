#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        REQUIRE(s.uniquePaths(3, 7) == 28);
    }

    SECTION("1")
    {
        REQUIRE(s.uniquePaths(3, 2) == 3);
    }
}