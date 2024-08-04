//The data structure I used for this soultion is Linked List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *left = dummy;   //Left pointer is set to dummy
        ListNode *right= head;

        while(n>0 && right)
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
