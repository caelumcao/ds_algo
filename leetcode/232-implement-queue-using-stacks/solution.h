/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

#include <stack>
using namespace std;

// @lc code=start
class MyQueue
{
public:
    stack<int> pushStk;
    stack<int> popStk;

    /** Initialize your data structure here. */
    MyQueue()
    {
    }

    /** Push element x to the back of queue. */
    void push(int x)
    {
        pushStk.push(x);
    }

    void migrate()
    {
        if (popStk.empty())
        {
            while (!pushStk.empty())
            {
                popStk.push(pushStk.top());
                pushStk.pop();
            }
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
        migrate();
        int val = popStk.top();
        popStk.pop();
        return val;
    }

    /** Get the front element. */
    int peek()
    {
        migrate();
        return popStk.top();
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
        return pushStk.empty() && popStk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
