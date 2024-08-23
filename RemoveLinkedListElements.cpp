class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(0);
        dummy -> next = head;
        ListNode *curr = head;
        ListNode *prev = dummy;
