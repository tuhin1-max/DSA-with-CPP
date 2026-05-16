class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* newnode;
        ListNode* ans = new ListNode(0);
        ListNode* tail = ans;

        int sum = 0;
        while(temp != NULL){
            if(temp->val != 0){
                sum += temp->val; 
            }

            if(temp->val == 0){
                newnode = new ListNode(sum);
                tail->next = newnode;
                tail = newnode;
                sum = 0;
            }

            temp = temp->next;
        }
        
        return ans->next;
    }
};