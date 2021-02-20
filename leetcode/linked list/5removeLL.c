#include <stdio.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *removeElements(struct ListNode *head, int val)
{
    if (!head)
        return NULL;
    struct ListNode *h = (int *)malloc(sizeof(int));
    
    h->next = head;
    head = h;
    while (h->next)
    {
        if (h->next->val == val)
        {
            h->next = h->next->next;
        }
        else
        {
            h = h->next;
            h->next= h->next->next;
        }
    }
    return head->next;
}
