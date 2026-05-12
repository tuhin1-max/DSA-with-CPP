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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        if (head == NULL) {
            return head;
        }
        while (temp->next != NULL) {
            if (temp->val == temp->next->val) {
                temp->next = temp->next->next;
            }
            else {
                temp = temp->next;
            }
        }
        return head;
    }
};

// ==================== LOCAL TEST ====================
int main() {
    Solution sol;

    // Example 1: [1,1,2] → [1,2]
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(1);
    head1->next->next = new ListNode(2);

    ListNode* res1 = sol.deleteDuplicates(head1);
    while (res1 != NULL) {
        cout << res1->val << " ";
        res1 = res1->next;
    }
    cout << endl; // Output: 1 2

    // Example 2: [1,1,2,3,3] → [1,2,3]
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(1);
    head2->next->next = new ListNode(2);
    head2->next->next->next = new ListNode(3);
    head2->next->next->next->next = new ListNode(3);

    ListNode* res2 = sol.deleteDuplicates(head2);
    while (res2 != NULL) {
        cout << res2->val << " ";
        res2 = res2->next;
    }
    cout << endl; // Output: 1 2 3

    return 0;
}