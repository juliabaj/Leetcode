class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(0);         //creating a dummy node as a "first" node
        dummy -> next = head;                      //Actual first node is next to dummy
        ListNode *curr = head;                    //Setting current pointer to head
        ListNode *prev = dummy;                   //Setting previous pointer to dummy node
        while(curr)
                {
                    ListNode *nxt = curr -> next;        //Creating a pointer "next" that points to the node next to current
        
                    if(curr->val == val)                  //If the node meant to be removed is found - node next to previous is now set to next not current
                    {
                        prev -> next = nxt;  
                    }
                    else 
                        prev = curr;                     //If it is not found, move to the next node
                        curr = nxt;
                }
                return dummy -> next;
                
            }
        };
