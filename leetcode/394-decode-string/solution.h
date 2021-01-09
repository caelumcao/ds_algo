/*
 * @lc app=leetcode.cn id=394 lang=cpp
 *
 * [394] 字符串解码
 */
#include <string>
#include <stack>
#include <ctype.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    string decodeString(string s)
    {
        stack<string> stk;
        int i = 0;
        int len = s.size();
        while (i < len)
        {
            char c = s[i];
            if (isdigit(c))
            {
                string temp;
                while (i < len && isdigit(s[i]))
                {
                    temp.push_back(s[i]);
                    ++i;
                }
                stk.push(temp);
            }
            else if (c == '[')
            {
                stk.push("[");
                ++i;
            }
            else if (c == ']')
            {
                string token;
                while (!stk.empty())
                {
                    const string &v = stk.top();
                    if (v == "[")
                    {
                        stk.pop();
                        break;
                    }
                    token = v + token;
                    stk.pop();
                }
                int count = atoi(stk.top().c_str());
                stk.pop();
                string joint;
                for (int j = 0; j < count; ++j)
                    joint += token;
                stk.push(joint);
                ++i;
            }
            else
            {
                string temp;
                while (i < len && !isdigit(s[i]) && s[i] != '[' && s[i] != ']')
                {
                    temp.push_back(s[i]);
                    ++i;
                }
                stk.push(temp);
            }
        }

        string res;
        while (!stk.empty())
        {
            res = stk.top() + res;
            stk.pop();
        }
        return res;
    }
};
// @lc code=end
