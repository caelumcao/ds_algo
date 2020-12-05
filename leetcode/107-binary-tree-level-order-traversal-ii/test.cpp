#include "catch.hpp"
#include "solution.h"
#include "vector_util.h"

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
            vector<int>{15, 7},
            vector<int>{9, 20},
            vector<int>{3},
        };

        vector<vector<int>> real = s.levelOrderBottom(&n5);

        REQUIRE(compare2DeepVecInt(expected, real));
    };
}