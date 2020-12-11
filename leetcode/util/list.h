#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

static ListNode *createList(int values[], int len)
{
    ListNode *head = nullptr;
    ListNode *pre = nullptr;
    for (int i = 0; i < len; i++)
    {
        ListNode *node = new ListNode(values[i]);
        if (i == 0)
            head = node;
        else
            pre->next = node;
        pre = node;
    }
    return head;
}

static void destroyList(ListNode *head)
{
    while (head)
    {
        ListNode *node = head->next;
        delete head;
        head = node;
    }
}

static void printList(ListNode *head)
{
    std::cout << "================ begin ================\n";
    while (head)
    {
        std::cout << head->val << ",";
        head = head->next;
    }
    std::cout << "\n================= end =================\n";
}

static bool compareListValue(ListNode *head, int values[], int len)
{
    int counter = 0;
    ListNode *node = head;
    while (node)
    {
        if (counter >= len)
            return false;

        if (node->val != values[counter])
            return false;

        node = node->next;
        counter++;
    }

    if (counter != len)
        return false;

    return true;
}