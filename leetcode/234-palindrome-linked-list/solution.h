/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr)
            return true;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        fast = slow->next;
        slow->next = nullptr;
        while (fast)
        {
            ListNode *temp = fast;
            fast = fast->next;
            temp->next = slow;
            slow = temp;
        }

        while (head != nullptr)
        {
            if (head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }

        return true;
    }
};
// @lc code=end
