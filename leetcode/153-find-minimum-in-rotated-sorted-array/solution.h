/*
 * @lc app=leetcode.cn id=153 lang=cpp
 *
 * [153] 寻找旋转排序数组中的最小值
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int max = nums.size() - 1;
        int start = 0, end = max, mid;
        while (start < end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] > nums[end])
                start = mid + 1;
            else
                end = mid;
        }

        return nums[start];
    }
};
// @lc code=end
