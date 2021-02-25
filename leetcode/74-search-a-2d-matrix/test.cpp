#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<vector<int>> martix = {
            {1, 3, 5, 7},
            {10, 11, 16, 20},
            {23, 30, 34, 60},
            {1, 3, 5, 6}};
        REQUIRE(s.searchMatrix(martix, 3) == true);
    }

    SECTION("2")
    {
        vector<vector<int>> martix = {
            {1, 3, 5, 7},
            {10, 11, 16, 20},
            {23, 30, 34, 60}};
        REQUIRE(s.searchMatrix(martix, 13) == false);
    }

    SECTION("3")
    {
        vector<vector<int>> martix = {
            {1, 3, 5, 7},
            {10, 11, 16, 20},
            {23, 30, 34, 60}};
        REQUIRE(s.searchMatrix(martix, 3) == true);
    }
}