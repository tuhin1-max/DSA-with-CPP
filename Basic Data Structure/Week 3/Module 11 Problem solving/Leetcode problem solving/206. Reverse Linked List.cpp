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
    void reverse(ListNode* &head, ListNode* temp) {
        if (temp->next == NULL) {
            head = temp;
            return;
        }

        reverse(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }

    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return head;
        }
        reverse(head, head);
        return head;
    }
};

// ==================== LOCAL TEST ====================
int main() {
    Solution sol;

    // Example 1: [1,2,3,4,5] → [5,4,3,2,1]
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);

    ListNode* res1 = sol.reverseList(head1);
    while (res1 != NULL) {
        cout << res1->val << " ";
        res1 = res1->next;
    }
    cout << endl; // Output: 5 4 3 2 1

    // Example 2: [1,2] → [2,1]
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);

    ListNode* res2 = sol.reverseList(head2);
    while (res2 != NULL) {
        cout << res2->val << " ";
        res2 = res2->next;
    }
    cout << endl; // Output: 2 1

    // Example 3: [] → []
    ListNode* head3 = NULL;
    ListNode* res3 = sol.reverseList(head3);
    cout << (res3 == NULL ? "Empty list" : "") << endl; // Output: Empty list

    return 0;
}