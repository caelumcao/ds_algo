/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

#include <vector>
#include <iostream>
using namespace std;

// 动态规划+贪心+二分查找
// tails[i] 表示递增序列长度为i+1时，最后一个数的最小值，可以证明tails是升序的

// @lc code=start
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 1)
            return n;

        vector<int> tails(n);
        tails[0] = nums[0];
        int end = 0;

        for (int i = 1; i < n; ++i)
        {
            if (nums[i] > tails[end])
            {
                ++end;
                tails[end] = nums[i];
            }
            else
            {
                int left = 0, right = end;
                while (left < right)
                {
                    int mid = left + (right - left) / 2;
                    if (tails[mid] < nums[i])
                        left = mid + 1;
                    else
                        right = mid;
                }

                // 这里因为tails[left - 1] < nums[i] <= tails[left]
                tails[left] = nums[i];
            }
        }

        return end + 1;
    }
};
// @lc code=end

// 动态规划 o(n2)
class Solution1
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> maxLens(n, 1);
        int maxLen = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
                if (nums[i] > nums[j] && maxLens[j] + 1 > maxLens[i])
                    maxLens[i] = maxLens[j] + 1;

            if (maxLen < maxLens[i])
                maxLen = maxLens[i];
        }

        return maxLen;
    }
};