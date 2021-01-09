#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    SECTION("1")
    {
        MinStack minStack;
        minStack.push(-2);
        minStack.push(0);
        minStack.push(-3);
        REQUIRE(minStack.getMin() == -3);
        minStack.pop();
        REQUIRE(minStack.top() == 0);
        REQUIRE(minStack.getMin() == -2);
    }
}