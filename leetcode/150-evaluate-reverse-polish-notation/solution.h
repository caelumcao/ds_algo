/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

#include <vector>
#include <string>
#include <stack>

using namespace std;

// @lc code=start
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> stk;
        for (auto &token : tokens)
        {
            if (token == "+" || token == "-" || token == "*" || token == "/")
            {
                int right = stk.top();
                stk.pop();
                int left = stk.top();
                stk.pop();
                int res = 0;
                if (token == "+")
                    res = left + right;
                else if (token == "-")
                    res = left - right;
                else if (token == "*")
                    res = left * right;
                else if (token == "/")
                    res = left / right;
                stk.push(res);
            }
            else
            {
                stk.push(atoi(token.c_str()));
            }
        }
        return stk.top();
    }
};
// @lc code=end
