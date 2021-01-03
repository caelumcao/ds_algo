/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
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
    ListNode *reverseBetween(ListNode *head, int m, int n)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *lastSegTail = dummy;
        for (int i = 1; i < m; i++)
            lastSegTail = lastSegTail->next;
        head = lastSegTail->next;
        for (int i = m; i < n; i++)
        {
            ListNode *next = head->next;
            head->next = next->next;
            next->next = lastSegTail->next;
            lastSegTail->next = next;
        }
        return dummy->next;
    }
};

// @lc code=end

class Solution1
{
public:
    ListNode *reverseBetween(ListNode *head, int m, int n)
    {
        ListNode *node = head;
        ListNode *pre = nullptr;
        ListNode *lastSegTail = nullptr;
        ListNode *curSeqFront = nullptr;
        int counter = 1;
        while (counter < m)
        {
            lastSegTail = node;
            node = node->next;
            counter++;
        }
        curSeqFront = node;
        while (counter < n)
        {
            ListNode *next = node->next;
            node->next = pre;
            pre = node;
            node = next;
            counter++;
        }
        if (curSeqFront != node)
        {
            curSeqFront->next = node->next;
            node->next = pre;
        }
        if (lastSegTail)
        {
            lastSegTail->next = node;
            node = head;
        }
        return node;
    }
};