//The data structure I used for this soultion is Linked List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;       //Setting up a dummy node in case of errors such as deleting a first node

        ListNode *left = dummy;   //Left pointer is set to dummy
        ListNode *right= head;    // Right pointer set to head node

        while(n>0 && right)       //While right pointer is true
        {
            right = right -> next;   //Moving the right pointer for nth positions, so that it is n nodes forward the left pointer
            n = n-1;                 // Decrementing n for 1 position
        }
        while(right)
        {
            left = left -> next;    //Moving the pointers to the next nodes till the right pointer is on the last node - then left pointers points to the nth node that we want to delete
            right = right -> next;
        }
        left->next = left -> next -> next;    // Deleting a node by setting up next to next after next node
        return dummy -> next;                 // Returning a new head which left pointer points to
    }
};
