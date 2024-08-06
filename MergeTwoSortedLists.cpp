//In this soultion i'm using a data structure Linked List. ->val is a default variable in this structure that stores the value of the node
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(0);        //creating a dummy node in cases of errors such as deleting the first actual node
        ListNode* head = dummy;                   // Setting dummy node to head
        while(list1 && list2)                    //Iterating through both lists untill none of them is empty
        {
            if(list1-> val < list2->val)         //If value of the list1's node is smaller than value of list2's node - 
            {
                head -> next = list1;            // - Then the next element is this node
                list1 = list1->next;
            }
            else{
            head ->next = list2;
            list2 = list2->next; 
            }
            head = head ->next;
        }
        if(list1)
        {
            head -> next = list1;
        }
        else if(list2){
            head -> next = list2;
        }
        return dummy->next;
    }
    
};
