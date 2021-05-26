#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<int> nums = {2, 3, 1, 1, 4};
        REQUIRE(s.jump(nums) == 2);
    }

    SECTION("2")
    {
        vector<int> nums = {7, 0, 9, 6, 9, 6, 1, 7, 9, 0, 1, 2, 9, 0, 3};
        REQUIRE(s.jump(nums) == 2);
    }
}