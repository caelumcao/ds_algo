/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

#include <vector>
#include <map>
using namespace std;

// 贪心算法
// @lc code=start
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int maxpos = 0, n = nums.size(), step = 0, end = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (maxpos >= i)
            {
                maxpos = max(maxpos, i + nums[i]);
                if (i == end)
                {
                    end = maxpos;
                    ++step;
                }
            }
        }
        return step;
    }
};
// @lc code=end

// 动态规则+贪心算法，还是超时
class Solution_dp_greed
{
public:
    int jump(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int n = nums.size();
        vector<int> minjump(n, 0);
        for (int i = 1; i < n; ++i)
        {
            int j = 0;
            while (j < i && j + nums[j] < i)
                ++j;

            minjump[i] = minjump[j] + 1;
        }
        return minjump[n - 1];
    }
};

// 动态规划，超时了
class Solution_dp_n2
{
public:
    int jump(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int n = nums.size();
        vector<int> minjump(n, 0);
        for (int i = 1; i < n; ++i)
        {
            int curjump = i;
            for (int j = 0; j < i; ++j)
                if (j + nums[j] >= i && minjump[j] < curjump)
                    curjump = minjump[j];
            minjump[i] = curjump + 1;
        }
        return minjump[n - 1];
    }
};