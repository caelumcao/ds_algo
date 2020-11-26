#include "catch.hpp"
#include "solution.h"

bool compareVec(vector<vector<int>> &left, vector<vector<int>> &right)
{
    if (left.size() != right.size())
        return false;

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    for (size_t i = 0; i < left.size(); ++i)
    {
        if (left[i] != right[i])
            return false;
    }
    return true;
}

TEST_CASE("Implement strStr", "[strStr]")
{
    Solution s;

    SECTION("1")
    {
        vector<int> nums{1, 2, 3};
        vector<vector<int>> resExpected{
            {},
            {1},
            {2},
            {3},
            {1, 2},
            {1, 3},
            {2, 3},
            {1, 2, 3},
        };
        vector<vector<int>> resReal = s.subsets(nums);
        REQUIRE(compareVec(resExpected, resReal));
    };

    SECTION("2")
    {
        vector<int> nums{0};
        vector<vector<int>> resExpected{
            {},
            {0},
        };
        vector<vector<int>> resReal = s.subsets(nums);
        REQUIRE(compareVec(resExpected, resReal));
    };
}