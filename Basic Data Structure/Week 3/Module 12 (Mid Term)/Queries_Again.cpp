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

void insert_at_any_position(Node* &head,Node* &tail,int index,int val){
    Node* newnode = new Node(val);

    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    Node* temp = head;

    for(int i=1;i<index;i++){
        temp = temp->next;
    }

    temp->next->prev = newnode;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
}

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);

    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int size(Node* &head){
    Node* temp = head;
    
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

void print_forward(Node* &head){
    Node* temp = head;
    
    cout << "L ->" << " ";
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_backward(Node* &tail){
    Node* temp = tail;

    cout << "R ->" << " " ;
    while(temp!=NULL){
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
        int idx;
        int val;
        cin >> idx >> val;

        int sz = size(head);

        if(idx>sz){
            cout << "Invalid" << endl;
        }

        else if(idx==0){
            insert_at_head(head,tail,val);
            print_forward(head);
            print_backward(tail);
        }

        else if(idx == sz){
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