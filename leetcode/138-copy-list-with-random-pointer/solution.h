/*
 * @lc app=leetcode.cn id=138 lang=cpp
 *
 * [138] 复制带随机指针的链表
 */

#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == nullptr)
            return nullptr;

        Node *cur = head;
        while (cur)
        {
            Node *newNode = new Node(cur->val);
            newNode->next = cur->next;
            cur->next = newNode;
            cur = newNode->next;
        }

        Node *newHead = head->next;
        cur = head;

        while (cur)
        {
            if (cur->random)
                cur->next->random = cur->random->next;
            cur = cur->next->next;
        }

        cur = head;
        while (cur)
        {
            Node *newNode = cur->next;
            cur->next = newNode->next;
            if (cur->next)
                newNode->next = cur->next->next;
            cur = cur->next;
        }

        return newHead;
    }
};
// @lc code=end
