/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1, mid;
        while (start < end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] > nums[end])
                start = mid + 1;
            else if (nums[mid] < nums[end])
                end = mid;
            else
                end--;
        }

        return nums[start];
    }
};
// @lc code=end
