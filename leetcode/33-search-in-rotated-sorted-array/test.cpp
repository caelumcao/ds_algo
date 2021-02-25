#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
        REQUIRE(s.search(nums, 0) == 4);
    }

    SECTION("2")
    {
        vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
        REQUIRE(s.search(nums, 3) == -1);
    }

    SECTION("3")
    {
        vector<int> nums = {1};
        REQUIRE(s.search(nums, 0) == -1);
    }

    SECTION("3")
    {
        vector<int> nums = {1, 3};
        REQUIRE(s.search(nums, 3) == 1);
    }
}