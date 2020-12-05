/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
 */
#include <vector>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// @lc code=start

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        if (root == NULL)
            return vector<vector<int>>();

        vector<queue<TreeNode *>> queVec(1);
        queVec[0].push(root);
        vector<vector<int>> res(1);
        size_t i = 0;
        while (i < queVec.size())
        {
            TreeNode *node = queVec[i].front();
            queVec[i].pop();
            res[i].push_back(node->val);

            if (i + 1 == queVec.size() && (node->left || node->right))
            {
                queVec.push_back(queue<TreeNode *>());
                res.push_back(vector<int>());
            }
            if (node->left)
                queVec[i + 1].push(node->left);
            if (node->right)
                queVec[i + 1].push(node->right);

            if (queVec[i].empty())
                i++;
        }
        return res;
    }
};
// @lc code=end

// todo optimize code