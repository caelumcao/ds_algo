#include "catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Solution", "[solution]")
{
    Solution s;

    SECTION("1")
    {
        Node *n1 = new Node(7);
        Node *n2 = new Node(13);
        Node *n3 = new Node(11);
        Node *n4 = new Node(10);
        Node *n5 = new Node(1);
        n1->next = n2;
        n2->next = n3;
        n3->next = n4;
        n4->next = n5;
        n2->random = n1;
        n3->random = n5;
        n4->random = n3;
        n5->random = n1;
        Node *node = s.copyRandomList(n1);
        Node *cur = n1;
        while (cur)
        {
            REQUIRE(node);
            REQUIRE(cur->val == node->val);
            if (cur->random)
            {
                REQUIRE(node->random);
                REQUIRE(cur->random->val == node->random->val);
            }
            cur = cur->next;
            node = node->next;
        }
    }
}