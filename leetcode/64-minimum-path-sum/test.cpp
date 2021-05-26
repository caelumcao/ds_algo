#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<vector<int>> grid{
            {1, 3, 1},
            {1, 5, 1},
            {4, 2, 1}};
        REQUIRE(s.minPathSum(grid) == 7);
    }
}