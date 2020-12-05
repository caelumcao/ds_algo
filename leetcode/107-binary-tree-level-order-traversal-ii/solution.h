/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
 */
#include <vector>
#include <queue>
#include "tree.h"
using namespace std;

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> res;
        if (root == NULL)
            return res;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty())
        {
            int layerLen = que.size();
            res.push_back(vector<int>(layerLen));
            for (int i = 0; i < layerLen; i++)
            {
                TreeNode *node = que.front();
                que.pop();
                res.back()[i] = node->val;
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
