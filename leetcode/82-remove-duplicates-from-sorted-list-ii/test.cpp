#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    // SECTION("1")
    // {
    //     int values[] = {1, 2, 3, 3, 4, 4, 5};
    //     ListNode *head = createList(values, 7);
    //     ListNode *res = s.deleteDuplicates(head);
    //     int expected[] = {1, 2, 5};
    //     REQUIRE(compareListValue(res, expected, 3));
    // }

    // SECTION("2")
    // {
    //     int values[] = {1, 1, 1, 2, 3};
    //     ListNode *head = createList(values, 5);
    //     ListNode *res = s.deleteDuplicates(head);
    //     int expected[] = {2, 3};
    //     REQUIRE(compareListValue(res, expected, 2));
    // }

    SECTION("3")
    {
        int values[] = {1, 2, 2};
        ListNode *head = createList(values, 3);
        ListNode *res = s.deleteDuplicates(head);
        int expected[] = {1};
        REQUIRE(compareListValue(res, expected, 1));
    }
}