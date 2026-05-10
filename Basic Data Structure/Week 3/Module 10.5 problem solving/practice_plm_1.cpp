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

void same_or_not_same_doubly(Node* head,Node* tail){
    bool flag = false;
    for(Node* i=head,*j=head;i!=NULL || j!=NULL;i=i->next,j=j->next){
        if(i->val != j->val){
            flag = true;
            break;
        }
    }

    if(flag == false){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
    
    same_or_not_same_doubly(head,tail);
    // print_linked_list(head);
    return 0;
}