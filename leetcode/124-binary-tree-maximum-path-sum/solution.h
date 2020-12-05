/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] 二叉树中的最大路径和
 */

// @lc code=start

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int maxLeafPathSum(TreeNode *root, int &curMaxPathSum)
    {
        if (root == NULL)
            return 0;
        int leftMaxPathSum = maxLeafPathSum(root->left, curMaxPathSum);
        int rightMaxPathSum = maxLeafPathSum(root->right, curMaxPathSum);
        int tempMaxPathSum = root->val;
        if (leftMaxPathSum > 0)
            tempMaxPathSum += leftMaxPathSum;
        if (rightMaxPathSum > 0)
            tempMaxPathSum += rightMaxPathSum;
        if (tempMaxPathSum > curMaxPathSum)
            curMaxPathSum = tempMaxPathSum;
        int tempMaxLeafPathSum = leftMaxPathSum > rightMaxPathSum ? leftMaxPathSum : rightMaxPathSum;
        return tempMaxLeafPathSum > 0 ? root->val + tempMaxLeafPathSum : root->val;
    }

    int maxPathSum(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int curMaxPathSum = root->val;
        maxLeafPathSum(root, curMaxPathSum);
        return curMaxPathSum;
    }
};
// @lc code=end
