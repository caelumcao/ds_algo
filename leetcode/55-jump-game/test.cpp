#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<int> nums = {2, 3, 1, 1, 4};
        REQUIRE(s.canJump(nums));
    }

    SECTION("2")
    {
        vector<int> nums = {3, 2, 1, 0, 4};
        REQUIRE(s.canJump(nums) == false);
    }
}