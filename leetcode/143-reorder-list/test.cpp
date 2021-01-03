#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {1, 2, 3, 4};
        ListNode *head = createList(values, 4);
        s.reorderList(head);
        printList(head);
        int expected[] = {1, 4, 2, 3};
        REQUIRE(compareListValue(head, expected, 4));
    }

    SECTION("2")
    {
        int values[] = {1, 2, 3, 4, 5};
        ListNode *head = createList(values, 5);
        s.reorderList(head);
        printList(head);
        int expected[] = {1, 5, 2, 4, 3};
        REQUIRE(compareListValue(head, expected, 5));
    }
}