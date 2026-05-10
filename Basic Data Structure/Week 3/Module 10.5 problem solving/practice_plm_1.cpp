#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print_linked_list(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    while(1){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }

        insert_at_tail(head,tail,x);
    }
    
    // print_linked_list(head);
    
    while(1){
        int y;
        cin >> y;
        if(y == -1){
            break;
        }

        insert_at_tail(head,tail,y);
    }

    // print_linked_list(head);
    return 0;
}