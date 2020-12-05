#include "catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {

        TreeNode n1(7);
        TreeNode n2(4);
        TreeNode n3(2, &n1, &n2);
        TreeNode n4(6);
        TreeNode n5(5, &n3, &n4);
        TreeNode n6(0);
        TreeNode n7(8);
        TreeNode n8(1, &n6, &n7);
        TreeNode n9(3, &n5, &n8);

        REQUIRE(s.lowestCommonAncestor(&n9, &n5, &n8) == &n9);
        REQUIRE(s.lowestCommonAncestor(&n9, &n5, &n2) == &n5);
    };
}