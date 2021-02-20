#include <stdio.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{

    struct ListNode *front = head, *back = head;
    while (front)
    {
        front = front->next;
        if (n-- < 0)
        {
            back = back->next;
        }
    }
    if (n == 0)
    {
        head = head->next;
    }
    else
    {
        back->next = back->next->next;
    }
    return head;
}
