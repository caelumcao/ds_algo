#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {4, 2, 1, 3};
        ListNode *head = createList(values, 4);
        ListNode *res = s.sortList(head);
        int expected[] = {1, 2, 3, 4};
        REQUIRE(compareListValue(res, expected, 4));
    }

    SECTION("2")
    {
        int values[] = {-1, 5, 3, 4, 0};
        ListNode *head = createList(values, 5);
        ListNode *res = s.sortList(head);
        int expected[] = {-1, 0, 3, 4, 5};
        REQUIRE(compareListValue(res, expected, 5));
    }
}