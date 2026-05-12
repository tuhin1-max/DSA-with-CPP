#include <bits/stdc++.h>
using namespace std;

// ==================== STRUCTURE ====================
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// ==================== SOLUTION ====================
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

// ==================== LOCAL TEST ====================
int main() {
    // Example 1: [1,2,3,4,5]
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* mid = sol.middleNode(head);
    cout << "Middle node: " << mid->val << endl; // Output: 3

    // Example 2: [1,2,3,4,5,6]
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    head2->next->next->next->next = new ListNode(5);
    head2->next->next->next->next->next = new ListNode(6);

    ListNode* mid2 = sol.middleNode(head2);
    cout << "Middle node: " << mid2->val << endl; // Output: 4

    return 0;
}