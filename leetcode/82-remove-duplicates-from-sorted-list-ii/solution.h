/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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

// 不是太优雅
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *pre = dummy;
        while (head)
        {
            bool repeated = false;
            while (head->next && head->next->val == head->val)
            {
                head = head->next;
                repeated = true;
            }
            if (!repeated)
            {
                pre->next = head;
                pre = head;
            }
            else
            {
                pre->next = nullptr;
            }

            head = head->next;
        }
        return dummy->next;
    }
};
// @lc code=end

// 官方解法，更精简易懂
class Solution1
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
        {
            return head;
        }

        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *cur = dummy;
        while (cur->next && cur->next->next)
        {
            if (cur->next->val == cur->next->next->val)
            {
                int x = cur->next->val;
                while (cur->next && cur->next->val == x)
                {
                    cur->next = cur->next->next;
                }
            }
            else
            {
                cur = cur->next;
            }
        }

        return dummy->next;
    }
};
