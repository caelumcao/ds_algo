#### 题目描述
https://leetcode-cn.com/problems/palindrome-linked-list/


Category	Difficulty	Likes	Dislikes
algorithms	Easy (45.12%)	804	-
Tags
linked-list | two-pointers

Companies
amazon | facebook

请判断一个链表是否为回文链表。

示例 1:
输入: 1->2
输出: false

示例 2:
输入: 1->2->2->1
输出: true

进阶：
你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？

#### 思路
找到中间结点，翻转后一半结点，最后比较两段结点