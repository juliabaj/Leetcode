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
