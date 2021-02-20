#include <stdio.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;
    struct ListNode *tempA = headA;
    struct ListNode *tempB = headB;
    int lengthA = 0;
    int lengthB = 0;

    while (tempA->next != NULL)
    {
        lengthA++;
        tempA = tempA->next;
    }

    while (tempB->next != NULL)
    {
        lengthB++;
        tempB = tempB->next;
    }

    if (tempA != tempB)
        return NULL;

    int diff = 0;
    
    if (lengthA > lengthB)
    {
        tempA = headA;
        tempB = headB;
        diff = lengthA - lengthB;
    }

    else
    {
        tempA = headB;
        tempB = headA;
        diff = lengthB - lengthA;
    }

    while (diff > 0)
    {
        tempA = tempA->next;
        diff--;
    }

    while (tempA != tempB)
    {
        tempA = tempA->next;
        tempB = tempB->next;
    }

    return tempA;
}