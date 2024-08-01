class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        int carry = 0;         
        int v1, v2;
        while(l1 || l2 || carry)
                {
                    v1 = (l1) ? l1->val :0;
                    v2 = (l2) ? l2->val :0;
                int val = v1+v2+carry;
                carry = val/10;      
                val = val % 10;       
                curr->next = new ListNode(val);
                curr = curr->next;
                l1 = (l1) ? l1->next :0;
                l2 = (l2) ? l2->next :0;
                }
                return dummy->next;

    }
};
