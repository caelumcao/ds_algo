#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;
    SECTION("1")
    {
        string str = "leetcode";
        vector<string> wordDict = {"leet", "code"};
        REQUIRE(s.wordBreak(str, wordDict) == true);
    }
    SECTION("2")
    {
        string str = "applepenapple";
        vector<string> wordDict = {"apple", "pen"};
        REQUIRE(s.wordBreak(str, wordDict) == true);
    }
    SECTION("3")
    {
        string str = "catsandog";
        vector<string> wordDict = {"cats", "dog", "sand", "and", "cat"};
        REQUIRE(s.wordBreak(str, wordDict) == false);
    }
}