class Solution {
public:
    int count_linked_list(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int size = count_linked_list(head);
        for (int i = 1; i <= size / 2; i++) {
            temp = temp->next;
        }
        return temp;
    }
};
