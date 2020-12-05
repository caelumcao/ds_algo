/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
 */

// @lc code=start

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *ancestor;

    int findNode(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL)
            return 0;
        int finalRes = 0;
        int leftRes = findNode(root->left, p, q);
        if (leftRes > 1)
            return leftRes;
        else if (leftRes == 1)
            finalRes++;
        int rightRes = findNode(root->right, p, q);
        if (rightRes > 1)
            return rightRes;
        else if (rightRes == 1)
            finalRes++;
        if (root == p || root == q)
            finalRes++;
        if (finalRes > 1)
            ancestor = root;

        return finalRes;
    }

    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        findNode(root, p, q);
        return ancestor;
    }
};
// @lc code=end
