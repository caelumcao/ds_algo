#### 题目描述
https://leetcode-cn.com/problems/reorder-list/


Category	Difficulty	Likes	Dislikes
algorithms	Medium (59.64%)	476	-
Tags
linked-list

Companies
Unknown

给定一个单链表 L：L0→L1→…→Ln-1→Ln ，
将其重新排列后变为： L0→Ln→L1→Ln-1→L2→Ln-2→…

你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。

示例 1:

给定链表 1->2->3->4, 重新排列为 1->4->2->3.
示例 2:

给定链表 1->2->3->4->5, 重新排列为 1->5->2->4->3.

#### 思路
找到中点断开，递归合入

todo
找到中点断开，翻转后面部分，然后合并前后两个链表