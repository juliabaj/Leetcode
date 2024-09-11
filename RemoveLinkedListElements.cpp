class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(0);         //creating a dummy node as a "first" node
        dummy -> next = head;                      //Actual first node is next to dummy
        ListNode *curr = head;                    //Setting current pointer to head
        ListNode *prev = dummy;                   //Setting previous pointer to dummy node
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
