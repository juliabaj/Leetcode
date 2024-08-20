class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left >= right)
        {
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* curr = head;
        ListNode* leftPrev = dummy;
        //ListNode* next = NULL;
for(int i=1; i< left; i++)         //znalezienie left
        {
            leftPrev = curr;
            curr = curr -> next;
        }
        // now cur = left
        // leftprev = node before left

        ListNode* prev = NULL;
        for(int i=1; i <= right - left + 1; i++)   //reverse from l to r
        {
            ListNode* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        // update pointers
        leftPrev -> next -> next = curr;  //curr is node after 'right'
        leftPrev -> next = prev;          // prev is 'right'
        /*ListNode* NewHead = dummy -> next;
        delete dummy;
        return NewHead;            // dummy->next to nasze head 
        */
        return dummy -> next;
    }
};
