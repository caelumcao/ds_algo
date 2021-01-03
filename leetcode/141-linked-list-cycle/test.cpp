#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {3, 2, 0, 4};
        ListNode *head = createCycleList(values, 4, 1);
        REQUIRE(s.hasCycle(head));
    }

    SECTION("2")
    {
        int values[] = {1, 2};
        ListNode *head = createCycleList(values, 2, 0);
        REQUIRE(s.hasCycle(head));
    }

    SECTION("3")
    {
        int values[] = {1};
        ListNode *head = createCycleList(values, 1, -1);
        REQUIRE(s.hasCycle(head) == false);
    }
}