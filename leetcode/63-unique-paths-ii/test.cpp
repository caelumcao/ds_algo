#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<vector<int>> obstacleGrid = {
            {0, 0, 0},
            {0, 1, 0},
            {0, 0, 0},
        };
        REQUIRE(s.uniquePathsWithObstacles(obstacleGrid) == 2);
    }

    SECTION("1")
    {
        vector<vector<int>> obstacleGrid = {
            {0, 1},
            {0, 0},
        };
        REQUIRE(s.uniquePathsWithObstacles(obstacleGrid) == 1);
    }
}