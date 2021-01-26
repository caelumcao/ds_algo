#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<vector<char>> grid{
            {'1', '1', '1', '1', '0'},
            {'1', '1', '0', '1', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '0', '0', '0'}};
        REQUIRE(s.numIslands(grid) == 1);
    }

    SECTION("2")
    {
        vector<vector<char>> grid{
            {'1', '1', '0', '0', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '1', '0', '0'},
            {'0', '0', '0', '1', '1'}};
        REQUIRE(s.numIslands(grid) == 3);
    }

    SECTION("2")
    {
        vector<vector<char>> grid{
            {'1', '1', '1'},
            {'0', '1', '0'},
            {'1', '1', '1'}};
        REQUIRE(s.numIslands(grid) == 1);
    }
}