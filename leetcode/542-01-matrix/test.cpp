#include "catch2/catch.hpp"
#include "solution.h"
#include "util/vector_util.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<vector<int>> martix = {
            {0, 0, 0},
            {0, 1, 0},
            {0, 0, 0}};
        vector<vector<int>> res = s.updateMatrix(martix);
        vector<vector<int>> expected = {
            {0, 0, 0},
            {0, 1, 0},
            {0, 0, 0}};
        REQUIRE(compare2DeepVecInt(res, expected));
    }

    SECTION("2")
    {
        vector<vector<int>> martix = {
            {0, 0, 0},
            {0, 1, 0},
            {1, 1, 1}};
        vector<vector<int>> res = s.updateMatrix(martix);
        vector<vector<int>> expected = {
            {0, 0, 0},
            {0, 1, 0},
            {1, 2, 1}};
        print2DeepVecInt(res);
        REQUIRE(compare2DeepVecInt(res, expected));
    }
}