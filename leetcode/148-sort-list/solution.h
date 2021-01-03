/*
 * @lc app=leetcode.cn id=148 lang=cpp
 *
 * [148] 排序链表
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
    ListNode *merge(ListNode *left, ListNode *right)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *node = dummy;
        while (left != nullptr && right != nullptr)
        {
            if (left->val > right->val)
            {
                node->next = right;
                right = right->next;
            }
            else
            {
                node->next = left;
                left = left->next;
            }
            node = node->next;
        }
        if (left != nullptr)
            node->next = left;
        if (right != nullptr)
            node->next = right;
        return dummy->next;
    }

    ListNode *findMiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode *mergeSort(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *mid = findMiddle(head);
        ListNode *right = mergeSort(mid->next);
        mid->next = nullptr;
        ListNode *left = mergeSort(head);
        return merge(left, right);
    }

    ListNode *sortList(ListNode *head)
    {
        return mergeSort(head);
    }
};
// @lc code=end
