#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        int values[] = {1, 4, 3, 2, 5, 2};
        ListNode *l = createList(values, 6);
        ListNode *res = s.partition(l, 3);
        int expected[] = {1, 2, 2, 4, 3, 5};
        REQUIRE(compareListValue(res, expected, 6));
    }
}