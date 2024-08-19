class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode *fast = head;            //Initializing fast pointer that moves 2 nodes at a time
        ListNode *slow = head;            //Initializing slow pointer that moves 1 node at a time
        bool cycleFound = false;

        while( fast != NULL && fast->next != NULL && slow != NULL)        //Checking if all nrequired nodes exist
        {
            fast = fast -> next -> next;        //Moving pointers
            slow = slow -> next;
            if( slow == fast)
            {
                cycleFound = true;
                break;
            }
        }
        if (!cycleFound)     
            return NULL;
        
        fast = head;                            //If the cycle still isn't found then set the head node for where the fast pointer is 
        while( slow != fast)                    //Moving pointers as long as slow is not equal to fast and the cycle isn't found
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        return slow;
    }
};
