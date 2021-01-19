/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 */

#include <vector>
#include <stack>
using namespace std;

// @lc code=start
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> left(n), right(n, n);
        stack<int> stk;
        for (int i = 0; i < n; ++i)
        {
            while (!stk.empty() && heights[i] <= heights[stk.top()])
            {
                right[stk.top()] = i;
                stk.pop();
            }
            left[i] = stk.empty() ? -1 : stk.top();
            stk.push(i);
        }

        int res = 0;
        for (int i = 0; i < n; ++i)
        {
            int width = right[i] - left[i] - 1;
            if (width <= 0)
                width = 1;
            int area = width * heights[i];
            if (area > res)
                res = area;
        }
        return res;
    }
};
// @lc code=end

class Solution1
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> left(n), right(n);
        stack<int> stk;
        for (int i = 0; i < n; ++i)
        {
            while (!stk.empty() && heights[i] <= heights[stk.top()])
                stk.pop();
            left[i] = stk.empty() ? -1 : stk.top();
            stk.push(i);
        }

        stk = stack<int>();
        for (int i = n - 1; i >= 0; --i)
        {
            while (!stk.empty() && heights[i] <= heights[stk.top()])
                stk.pop();
            right[i] = stk.empty() ? n : stk.top();
            stk.push(i);
        }

        int res = 0;
        for (int i = 0; i < n; ++i)
        {
            int area = (right[i] - left[i] - 1) * heights[i];
            if (area > res)
                res = area;
        }
        return res;
    }
};