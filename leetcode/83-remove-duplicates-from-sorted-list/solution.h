/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

#include "util/list.h"

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *node = head;
        while (node)
        {
            if (node->next && node->val == node->next->val)
            {
                ListNode *nextNode = node->next;
                node->next = nextNode->next;
                delete nextNode;
            }
            else
            {
                node = node->next;
            }
        }
        return head;
    }
};
// @lc code=end
