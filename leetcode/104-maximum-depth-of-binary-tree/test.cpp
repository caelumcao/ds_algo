#include "catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        TreeNode n1(3);
        TreeNode n2(9);
        TreeNode n3(20);
        TreeNode n4(15);
        TreeNode n5(7);
        n1.left = &n2;
        n1.right = &n3;
        n3.left = &n4;
        n3.right = &n5;

        REQUIRE(s.maxDepth(&n1) == 3);
    };
}