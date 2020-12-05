#include "catch.hpp"
#include "solution.h"
#include <iostream>

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

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {

        TreeNode n1(15);
        TreeNode n2(7);
        TreeNode n3(20, &n1, &n2);
        TreeNode n4(9);
        TreeNode n5(3, &n4, &n3);

        vector<vector<int>> expected = {
            vector<int>{3},
            vector<int>{9, 20},
            vector<int>{15, 7},
        };

        vector<vector<int>> real = s.levelOrder(&n5);

        REQUIRE(compareVec(expected, real));
    };
}