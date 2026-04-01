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

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}

int max_value(Node* &head){
    Node* max = head;
    for(Node* i=head;i!=NULL;i=i->next){
        if(max->val<i->val){
            max = i;
        }
    }
    return max->val;
}

int min_value(Node* &head){
    Node* min = head;
    for(Node* i=head;i!=NULL;i=i->next){
        if(min->val>i->val){
            min = i;
        }
    }
    return min->val;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
 
    int mx = max_value(head);
    int min = min_value(head);
    
    cout << mx-min << endl;
    return 0;
}