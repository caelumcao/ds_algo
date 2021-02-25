#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
        REQUIRE(s.search(nums, 0) == true);
    }

    SECTION("2")
    {
        vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
        REQUIRE(s.search(nums, 3) == false);
    }
}