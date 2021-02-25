#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<int> nums = {1, 3, 5, 6};
        REQUIRE(s.searchInsert(nums, 5) == 2);
    }

    SECTION("2")
    {
        vector<int> nums = {1, 3, 5, 6};
        REQUIRE(s.searchInsert(nums, 2) == 1);
    }

    SECTION("3")
    {
        vector<int> nums = {1, 3, 5, 6};
        REQUIRE(s.searchInsert(nums, 7) == 4);
    }

    SECTION("4")
    {
        vector<int> nums = {1, 3, 5, 6};
        REQUIRE(s.searchInsert(nums, 0) == 0);
    }

    SECTION("5")
    {
        vector<int> nums = {1, 3};
        REQUIRE(s.searchInsert(nums, 2) == 1);
    }
}