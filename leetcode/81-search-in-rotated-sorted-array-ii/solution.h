/*
 * @lc app=leetcode.cn id=81 lang=cpp
 *
 * [81] 搜索旋转排序数组 II
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return true;

            if (nums[mid] > nums[end])
            {
                if (nums[mid] > target && nums[start] <= target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else if (nums[mid] < nums[end])
            {
                if (nums[mid] < target && nums[end] >= target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            else
            {
                end--;
            }
        }

        return false;
    }
};
// @lc code=end
