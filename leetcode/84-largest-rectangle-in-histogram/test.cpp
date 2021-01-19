#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<int> heights = {2, 1, 5, 6, 2, 3};
        REQUIRE(s.largestRectangleArea(heights) == 10);
    }

    SECTION("2")
    {
        vector<int> heights = {1, 1};
        REQUIRE(s.largestRectangleArea(heights) == 2);
    }
}