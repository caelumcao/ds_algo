#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;
    SECTION("1")
    {
        vector<string> tokens = {"2", "1", "+", "3", "*"};
        REQUIRE(s.evalRPN(tokens) == 9);
    }
    SECTION("2")
    {
        vector<string> tokens = {"4", "13", "5", "/", "+"};
        REQUIRE(s.evalRPN(tokens) == 6);
    }
    SECTION("3")
    {
        vector<string> tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
        REQUIRE(s.evalRPN(tokens) == 22);
    }
}