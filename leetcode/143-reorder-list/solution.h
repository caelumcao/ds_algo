/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] 重排链表
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
    ListNode *slow;
    ListNode *fast;

    void util(ListNode *head)
    {
        if (head == nullptr)
            return;
        if (!fast)
        {
            slow = head->next;
            head->next = nullptr;
        }
        else if (!fast->next)
        {
            slow = head->next->next;
            head->next->next = nullptr;
        }
        else
        {
            fast = fast->next->next;
            util(head->next);
            ListNode *node = slow->next;
            slow->next = head->next;
            head->next = slow;
            slow = node;
        }
    }

    void reorderList(ListNode *head)
    {
        if (head == nullptr)
            return;
        slow = head;
        fast = head->next;
        util(head);
    }
};
// @lc code=end
