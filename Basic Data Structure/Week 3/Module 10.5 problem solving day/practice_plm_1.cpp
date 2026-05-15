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

int count_linked_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

bool are_same(Node* &head,Node* &head2){
    for(Node* i = head,*j = head2;i!=NULL && j!=NULL;i=i->next,j=j->next){
        if(i->val != j->val){
            return false;
        }
    }

    return true;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    while(true){
        int x;
        cin >> x;
        if(x==-1){
            break;
        }
        insert_at_tail(head,tail,x);
    }

    int sz1 = count_linked_list(head);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    
    while(true){
        int x2;
        cin >> x2;
        if(x2==-1){
            break;
        }
        insert_at_tail(head2,tail2,x2);
    }

    int sz2 = count_linked_list(head2);

    if(sz1 != sz2){
        cout << "NO" << endl;
    }

    else{
        if(are_same(head,head2)){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}