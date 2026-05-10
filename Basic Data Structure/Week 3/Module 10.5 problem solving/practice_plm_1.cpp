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

void same_or_not_same_doubly(Node* head1,Node* head2){
    
    Node* i = head1;
    Node* j = head2;

    while(i != NULL && j != NULL){

        if(i->val != j->val){
            cout << "NO" << endl;
            return;
        }

        i = i->next;
        j = j->next;
    }

    if(i != NULL || j != NULL){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;

    while(1){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }

        insert_at_tail(head1,tail1,x);
    }
    
    // print_linked_list(head);
    
    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(1){
        int y;
        cin >> y;
        if(y == -1){
            break;
        }

        insert_at_tail(head2,tail2,y);
    }
    
    same_or_not_same_doubly(head1,head2);
    // print_linked_list(head);
    return 0;
}