#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values1[] = {1, 2, 4};
        ListNode *l1 = createList(values1, 3);
        int values2[] = {1, 3, 4};
        ListNode *l2 = createList(values2, 3);
        ListNode *res = s.mergeTwoLists(l1, l2);
        int expected[] = {1, 1, 2, 3, 4, 4};
        REQUIRE(compareListValue(res, expected, 6));
    }
}