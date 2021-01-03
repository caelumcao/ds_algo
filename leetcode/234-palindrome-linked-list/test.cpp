#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {1, 2};
        ListNode *head = createList(values, 2);
        REQUIRE(s.isPalindrome(head) == false);
    }

    SECTION("2")
    {
        int values[] = {1, 2, 2, 1};
        ListNode *head = createList(values, 4);
        REQUIRE(s.isPalindrome(head));
    }

    SECTION("3")
    {
        int values[] = {1, 2, 1};
        ListNode *head = createList(values, 3);
        REQUIRE(s.isPalindrome(head));
    }
}