#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<vector<int>> triangle{
            {2},
            {3, 4},
            {6, 5, 7},
            {4, 1, 8, 3}};
        REQUIRE(s.minimumTotal(triangle) == 11);
    }
}