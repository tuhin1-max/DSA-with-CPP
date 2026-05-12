#include <bits/stdc++.h>
using namespace std;

// ==================== STRUCTURE ====================
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// ====================  SOLUTION  ====================
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

// ==================== LOCAL TEST ====================
int main() {
    Solution sol;

    // Example 1: [1,2,3,4,5]
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);

    cout << "Example 1: " << sol.middleNode(head1)->val << endl; // Output: 3

    // Example 2: [1,2,3,4,5,6]
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    head2->next->next->next->next = new ListNode(5);
    head2->next->next->next->next->next = new ListNode(6);

    cout << "Example 2: " << sol.middleNode(head2)->val << endl; // Output: 4

    return 0;
}