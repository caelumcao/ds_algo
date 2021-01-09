#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;
    SECTION("1")
    {
        TreeNode n1(3);
        TreeNode n2(2, &n1, nullptr);
        TreeNode n3(1, nullptr, &n2);
        vector<int> res = s.inorderTraversal(&n3);
        vector<int> expected = {1, 3, 2};
        REQUIRE(res == expected);
    }
}