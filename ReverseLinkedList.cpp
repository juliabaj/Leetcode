//In this solution, the key is to keep track of changing values of the pointers, so that none of them gets lost and there is no error
//First we need to set up pointers to indicate the previous node, current node and next node.
//In the while loop 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;            //Initializing current pointer to the head node of the list
        ListNode* next = NULL;            //Initializing next pointer and previous pointer
        ListNode* prev = NULL;

        while(curr != NULL)                //Iterating through the list untill the current pointer is true
        {
            next = curr -> next;           //Setting next pointer to the node next to current
            curr -> next = prev;           //Setting the node next to current to previous
            prev = curr;                   //Setting the previous to the new current, so that we can move through the list
            curr = next;                   //Setting the current pointer to new next
        }
         head = prev;                       //Returning previous as new head node
         return head;
    }
};
