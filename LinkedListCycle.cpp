class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)                //if head node of the list doesn't exist - there is no list
        {
            return false;
        }

        ListNode *fast = head;          //Initializing both fast and slow pointers at the head node of the list
        ListNode *slow = head;          //Slow pointer will move one node at the time, while fast pointer will move two nodes ahead

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
