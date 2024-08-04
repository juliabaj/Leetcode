class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *left = dummy;   //left ustawiamy na dummy
        ListNode *right= head;

        while(n>0 && right)
        {
            right = right -> next;   //przesuwamy right o n pozycji
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