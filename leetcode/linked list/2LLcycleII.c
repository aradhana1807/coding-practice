#include <stdio.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *detectCycle(struct ListNode *head)
{
    struct ListNode *slowPtr, *fastPtr;
    slowPtr = fastPtr = head;

    while (slowPtr && fastPtr)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if (slowPtr == fastPtr)
            break;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    if (slowPtr != fastPtr)
        return NULL;

    slowPtr = head;
    while (slowPtr != fastPtr)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
    }

    if(slowPtr->next == NULL)
    {
        return (-1);
    }

    return slowPtr;

}
