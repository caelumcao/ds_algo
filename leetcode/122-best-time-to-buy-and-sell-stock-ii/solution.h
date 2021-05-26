/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int n = prices.size();
        for (int i = 1; i < n; ++i)
            profit += max(prices[i] - prices[i - 1], 0);
        return profit;
    }
};
// @lc code=end
