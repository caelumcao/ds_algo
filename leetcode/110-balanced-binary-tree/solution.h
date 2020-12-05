/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    int getDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int leftDepth = getDepth(root->left);
        if (leftDepth == -1)
            return -1;
        int rightDepth = getDepth(root->right);
        if (rightDepth == -1)
            return -1;
        int diff = leftDepth - rightDepth;
        if (diff > 1 || diff < -1)
            return -1;
        return diff > 0 ? leftDepth + 1 : rightDepth + 1;
    }

    bool isBalanced(TreeNode *root)
    {
        return getDepth(root) != -1;
    }
};
// @lc code=end
