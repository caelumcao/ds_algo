#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {1, 1, 1};
        ListNode *head = createList(values, 3);
        ListNode *res = s.deleteDuplicates(head);
        int expected[] = {1};
        REQUIRE(compareListValue(res, expected, 1));
    }

    SECTION("2")
    {
        int values[] = {1, 1, 2};
        ListNode *head = createList(values, 3);
        ListNode *res = s.deleteDuplicates(head);
        int expected[] = {1, 2};
        REQUIRE(compareListValue(res, expected, 2));
    }

    SECTION("3")
    {
        int values[] = {1, 1, 2, 3, 3};
        ListNode *head = createList(values, 5);
        ListNode *res = s.deleteDuplicates(head);
        int expected[] = {1, 2, 3};
        REQUIRE(compareListValue(res, expected, 3));
    }
}