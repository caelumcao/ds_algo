/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

#include "util/list.h"

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *node = dummy;
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val > l2->val)
            {
                node->next = l2;
                l2 = l2->next;
            }
            else
            {
                node->next = l1;
                l1 = l1->next;
            }
            node = node->next;
        }
        if (l1 != nullptr)
            node->next = l1;
        if (l2 != nullptr)
            node->next = l2;
        return dummy->next;
    }
};
// @lc code=end
