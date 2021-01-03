/*
 * @lc app=leetcode.cn id=86 lang=cpp
 *
 * [86] 分隔链表
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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *lDummy = new ListNode(0);
        ListNode *RDummy = new ListNode(0);
        ListNode *lNode = lDummy;
        ListNode *rNode = RDummy;
        while (head)
        {
            if (head->val < x)
            {
                lNode->next = head;
                lNode = head;
            }
            else
            {
                rNode->next = head;
                rNode = head;
            }
            head = head->next;
        }
        rNode->next = nullptr;
        lNode->next = RDummy->next;
        return lDummy->next;
    }
};
// @lc code=end
