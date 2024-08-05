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
            right = right -> next;   //Moving the right pointer for nth positions
            n = n-1;
        }
        while(right)
        {
            left = left -> next;
            right = right -> next;
        }
        left->next = left -> next -> next;
        return dummy -> next;
    }
};
