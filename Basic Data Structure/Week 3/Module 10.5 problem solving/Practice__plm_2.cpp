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
void reverse_linked_list(Node* &head,Node* &tail){
    for(Node* i=head,*j=tail;i!=j && i->prev!=j;i=i->next,j=j->prev){
        swap(i->val,j->val);
    }
}

void print(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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

    reverse_linke_list(head,tail);
    print(head);

    return 0;
}