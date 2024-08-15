class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)                //if head node of the list doesn't exist - there is no list
        {
            return false;
        }

        ListNode *fast = head;          //Initializing both fast and slow pointers at the head node of the list
        ListNode *slow = head;          //Slow pointer will move one node at the time, while fast pointer will move two nodes ahead

        while(fast != NULL && fast->next != NULL && slow != NULL )    //Iterating through the list and checking if any of the nodes are empty
        {
            fast = fast -> next -> next;                              //moving fast pointer two nodes at a time
            slow = slow -> next;                                      //moving slow pointer one at a time

            if( fast == slow)
            {
                return true;
            }  
        }
        return false;
    }
};
