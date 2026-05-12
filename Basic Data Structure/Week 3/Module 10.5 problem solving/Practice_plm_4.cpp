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

int count_linked_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

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

void insert_at_any_position(Node* &head,Node* &tail,int idx,int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    for(int i=1;i<idx;i++){
        temp = temp->next;
    }

    temp->next->prev = newnode;
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
}

void print_forward(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_backward(Node* &tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    while(q--){
        int idx,val;
        cin >> idx >> val;
        int sz = count_linked_list(head);
        if(sz < idx){
            cout << "Invalid" << endl;
        }
        
        else if(idx == 0){
            insert_at_head(head,tail,val);
            print_forward(head);
            print_backward(tail);
        }
        else if(sz == idx){
            insert_at_tail(head,tail,val);
            print_forward(head);
            print_backward(tail);
        }

        else{
            insert_at_any_position(head,tail,idx,val);
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}