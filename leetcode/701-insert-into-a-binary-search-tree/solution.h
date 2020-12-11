/*
 * @lc app=leetcode.cn id=701 lang=cpp
 *
 * [701] 二叉搜索树中的插入操作
 */
#include "util/tree.h"

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        TreeNode *newNode = new TreeNode(val);
        if (root == nullptr)
            return newNode;
        TreeNode *node = root;
        while (true)
        {
            if (node->val > val)
            {
                if (node->left)
                {
                    node = node->left;
                }
                else
                {
                    node->left = newNode;
                    break;
                }
            }
            else
            {
                if (node->right)
                {
                    node = node->right;
                }
                else
                {
                    node->right = newNode;
                    break;
                }
            }
        }
        return root;
    }
};
// @lc code=end
