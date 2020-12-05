#include "catch2/catch.hpp"
#include "solution.h"
#include "util/vector_util.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        TreeNode n1(1);
        TreeNode n2(3);
        TreeNode n3(2, &n1, &n2);

        REQUIRE(s.isValidBST(&n3) == true);
    };

    SECTION("2")
    {
        TreeNode n1(3);
        TreeNode n2(6);
        TreeNode n3(4, &n1, &n2);
        TreeNode n4(1);
        TreeNode n5(5, &n4, &n3);

        REQUIRE(s.isValidBST(&n5) == false);
    };

    SECTION("3")
    {
        TreeNode n1(3);
        TreeNode n2(7);
        TreeNode n3(6, &n1, &n2);
        TreeNode n4(4);
        TreeNode n5(5, &n4, &n3);

        REQUIRE(s.isValidBST(&n5) == false);
    }
}