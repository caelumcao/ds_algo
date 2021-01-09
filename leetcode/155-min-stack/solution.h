/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

#include <vector>
using namespace std;

// @lc code=start
class MinStack
{
public:
    vector<int> stack;
    vector<int> min;
    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int x)
    {
        stack.push_back(x);
        if (!min.empty() && x > min.back())
            min.push_back(min.back());
        else
            min.push_back(x);
    }

    void pop()
    {
        if (!stack.empty())
        {
            stack.pop_back();
            min.pop_back();
        }
    }

    int top()
    {
        if (stack.empty())
            return 0;
        else
            return stack.back();
    }

    int getMin()
    {
        if (min.empty())
            return 0;
        else
            return min.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
