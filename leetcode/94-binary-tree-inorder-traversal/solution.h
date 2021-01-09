/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */
#include "util/tree.h"
#include <vector>
#include <stack>
using namespace std;

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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> res;
        stack<TreeNode *> stk;
        while (root || !stk.empty())
        {
            while (root)
            {
                stk.push(root);
                root = root->left;
            }

            root = stk.top();
            stk.pop();
            res.push_back(root->val);
            root = root->right;
        }
        return res;
    }
};
// @lc code=end

class Solution1
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> res;
        stack<TreeNode *> stk;
        bool visited = false;
        while (root)
        {
            if (!visited && root->left)
            {
                stk.push(root);
                root = root->left;
            }
            else if (root->right)
            {
                res.push_back(root->val);
                root = root->right;
                visited = false;
            }
            else
            {
                res.push_back(root->val);
                if (stk.empty())
                {
                    root = nullptr;
                }
                else
                {
                    root = stk.top();
                    stk.pop();
                }
                visited = true;
            }
        }
        return res;
    }
};
