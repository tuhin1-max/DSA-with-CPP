class Solution {
public:
    int size_link_list(ListNode* &head){
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int size = size_link_list(head);
        int index = size - k;

        ListNode* temp1 = head;
        ListNode* temp2 = head;

        for(int i=1;i<k;i++){
            temp1 = temp1->next;
        }

        for(int j=0;j<index;j++){
            temp2 = temp2->next;
        }

        swap(temp2->val,temp1->val);


        return head;
    }
};