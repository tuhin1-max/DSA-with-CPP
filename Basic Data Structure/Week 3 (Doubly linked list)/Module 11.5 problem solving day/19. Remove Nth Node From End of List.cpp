class Solution {
public:
    int count_Linked_List(ListNode* &head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = count_Linked_List(head);
        int index = size - n;
        if(index == 0){
            head = head->next;
        }
        else{
            ListNode* temp = head;

            for(int i=1;i<index;i++){
                temp = temp->next;
            }

            temp->next = temp->next->next;
        }
        

        return head;
    }
};