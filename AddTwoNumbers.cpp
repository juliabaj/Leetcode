//This problem is solved by using Linked List and a dummy node. 
//Dummy node is a node before the first real node of the list, pretending to be the first one, to avoid errors
// if the actual first node is empty ;)

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0);             //creating a dummy node as a starting point of a linked list
        ListNode *curr = dummy;                        //Initializing a curr pointer as a current place of a linked list
        int carry = 0;                                 //Initializing carry variable that stores transfer value
        int v1, v2;
        while(l1 || l2 || carry)                       //Iterating through both list as long as they have elements or carry is true
                {
                    v1 = (l1) ? l1->val :0;            //if l1 is not empty - add it to v1, otherwise v1 = 0
                    v2 = (l2) ? l2->val :0;
                int val = v1+v2+carry;                 //calculating the sum of v1, v2 and carry
                carry = val/10;                        //Updating carry variable
                val = val % 10;                        //Rest from dividing
                curr->next = new ListNode(val);        //Creating a new node with new value
                curr = curr->next;                     //Updating a current value to the value next to curr
                l1 = (l1) ? l1->next :0;               //Moving l1 and l2 pointers to the next node if they aren't empty
                l2 = (l2) ? l2->next :0;
                }
                return dummy->next;                   //Returning a value of a first node (not a dummy node)

    }
};
