class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;            //Initializing current pointer to the head node of the list
        ListNode* next = NULL;            //Initializing next pointer and previous pointer
        ListNode* prev = NULL;

        while(curr != NULL)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
         head = prev;
         return head;
    }
};
