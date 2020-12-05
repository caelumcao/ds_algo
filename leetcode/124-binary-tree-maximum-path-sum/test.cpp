#include "catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {

        TreeNode n1(2);
        TreeNode n2(3);
        TreeNode n3(1, &n1, &n2);

        REQUIRE(s.maxPathSum(&n3) == 6);
    };

    SECTION("2")
    {
        TreeNode n1(15);
        TreeNode n2(7);
        TreeNode n3(20, &n1, &n2);
        TreeNode n4(9);
        TreeNode n5(-10, &n3, &n4);
        REQUIRE(s.maxPathSum(&n5) == 42);
    }
}