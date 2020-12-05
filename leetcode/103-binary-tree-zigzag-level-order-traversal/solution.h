/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层次遍历
 */

#include <vector>
#include <queue>
#include "util/tree.h"
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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        if (root == NULL)
            return res;
        queue<TreeNode *> que;
        que.push(root);
        bool leftToRight = true;
        while (!que.empty())
        {
            int layerLen = que.size();
            res.push_back(vector<int>(layerLen));
            for (int i = 0; i < layerLen; ++i)
            {
                TreeNode *node = que.front();
                que.pop();
                if (leftToRight)
                    res.back()[i] = node->val;
                else
                    res.back()[layerLen - i - 1] = node->val;
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
            }
            leftToRight = !leftToRight;
        }
        return res;
    }
};
// @lc code=end
