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
