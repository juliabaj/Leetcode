class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(0);
        dummy -> next = head;
        ListNode *curr = head;
        ListNode *prev = dummy;
        while(curr)
                {
                    ListNode *nxt = curr -> next;
        
                    if(curr->val == val)
                    {
                        prev -> next = nxt;  
                    }
                    else 
                        prev = curr;
                        curr = nxt;
                }
                return dummy -> next;
                
            }
        };
