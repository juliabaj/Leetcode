class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode *fast = head;
        ListNode *slow = head;
        bool cycleFound = false;

        while( fast != NULL && fast->next != NULL && slow != NULL)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
            if( slow == fast)
            {
                cycleFound = true;
                break;
            }
        }
        if (!cycleFound) 
            return NULL;
        
        fast = head;
        while( slow != fast)
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        return slow;
    }
};