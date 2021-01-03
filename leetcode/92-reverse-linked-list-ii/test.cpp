#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {1, 2, 3, 4, 5};
        ListNode *head = createList(values, 5);
        ListNode *res = s.reverseBetween(head, 2, 4);
        int expected[] = {1, 4, 3, 2, 5};
        REQUIRE(compareListValue(res, expected, 5));
    }

    SECTION("2")
    {
        int values[] = {3, 5};
        ListNode *head = createList(values, 2);
        ListNode *res = s.reverseBetween(head, 1, 1);
        int expected[] = {3, 5};
        REQUIRE(compareListValue(res, expected, 2));
    }
}