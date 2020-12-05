#include "catch.hpp"
#include "solution.h"

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

        REQUIRE(s.isBalanced(&n5) == true);
    };

    SECTION("2")
    {
        TreeNode n1(4);
        TreeNode n2(4);
        TreeNode n3(3, &n1, &n2);
        TreeNode n4(3);
        TreeNode n5(2, &n3, &n4);
        TreeNode n6(2);
        TreeNode n7(1, &n5, &n6);
        REQUIRE(s.isBalanced(&n7) == false);
    }

    SECTION("3")
    {
        REQUIRE(s.isBalanced(NULL) == true);
    }
}