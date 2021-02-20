#include <stdio.h>

  struct ListNode {
     int val;
    struct ListNode *next;
  };
 


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *ptr, *preptr = NULL, *temp;
    ptr = head;
    while(ptr!=NULL)
    {
        temp=ptr->next;
        ptr->next = preptr;
        preptr = ptr;
        ptr = temp;
    }

    head= preptr;
    return head;

}