/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.empty())
            return false;
        int m = matrix[0].size();
        int n = matrix.size();

        int start = 0, end = m * n - 1, mid = 0;
        while (start <= end)
        {
            mid = (end + start) / 2;
            int x = mid / m;
            int y = mid % m;
            if (matrix[x][y] > target)
                end = mid - 1;
            else if (matrix[x][y] < target)
                start = mid + 1;
            else
                return true;
        }
        return false;
    }
};
// @lc code=end
