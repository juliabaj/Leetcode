class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)                //if head node of the list doesn't exist - there is no list
        {
            return false;
        }

        ListNode *fast = head;
        ListNode *slow = head;

        while(fast != NULL && fast->next != NULL && slow != NULL )
        {
            fast = fast -> next -> next;
            slow = slow -> next;

            if( fast == slow)
            {
                return true;
            }  
        }
        return false;
    }
};
