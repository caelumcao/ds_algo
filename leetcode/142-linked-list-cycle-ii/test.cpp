#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {3, 2, 0, 4};
        ListNode *head = createCycleList(values, 4, 1);
        ListNode *cycle = s.detectCycle(head);
        REQUIRE(cycle);
        REQUIRE(cycle->val == 2);
    }

    SECTION("2")
    {
        int values[] = {1, 2};
        ListNode *head = createCycleList(values, 2, 0);
        ListNode *cycle = s.detectCycle(head);
        REQUIRE(cycle);
        REQUIRE(cycle->val == 1);
    }

    SECTION("3")
    {
        int values[] = {1};
        ListNode *head = createCycleList(values, 1, -1);
        ListNode *cycle = s.detectCycle(head);
        REQUIRE(cycle == nullptr);
    }
}