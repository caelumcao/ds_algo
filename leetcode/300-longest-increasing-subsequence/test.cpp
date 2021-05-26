#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
        REQUIRE(s.lengthOfLIS(nums) == 4);
    }

    SECTION("2")
    {
        vector<int> nums = {0, 1, 0, 3, 2, 3};
        REQUIRE(s.lengthOfLIS(nums) == 4);
    }

    SECTION("3")
    {
        vector<int> nums = {7, 7, 7, 7, 7, 7, 7};
        REQUIRE(s.lengthOfLIS(nums) == 1);
    }

    SECTION("3")
    {
        vector<int> nums = {1, 3, 6, 7, 9, 4, 10, 5, 6};
        REQUIRE(s.lengthOfLIS(nums) == 6);
    }
}