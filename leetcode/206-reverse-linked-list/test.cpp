#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {1, 2, 3, 4, 5};
        ListNode *head = createList(values, 5);
        ListNode *res = s.reverseList(head);
        int expected[] = {5, 4, 3, 2, 1};
        REQUIRE(compareListValue(res, expected, 5));
    }
}