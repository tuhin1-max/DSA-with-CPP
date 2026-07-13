// printing Linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
int main(){
    Node* head = new Node(10);
    Node* a = new Node (20);
    Node* b = new Node (30);
    Node* c = new Node (40);

    head->next = a;
    a->next = b;
    b->next = c;

    // while(head != NULL){
    //     cout << head->val << endl;
    //     head = head->next;
    // }
    // akhane jeivabe print kora hoice aeivabe print kora
    // jabe na karon akhane head ta null a chole aeice mane
    //  linked list ta akbar print kore hareay gace

    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
    return 0;
}