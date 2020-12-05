/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    void subsetsUtil(vector<int> &nums, int index, vector<vector<int>> &res, vector<int> &item)
    {
        if ((size_t)index >= nums.size())
            return;

        subsetsUtil(nums, index + 1, res, item);

        item.push_back(nums[index]);
        res.push_back(item);
        subsetsUtil(nums, index + 1, res, item);
        item.pop_back();
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> item;
        res.push_back(item);
        subsetsUtil(nums, 0, res, item);
        return res;
    }
};
// @lc code=end

// todo optimize solution