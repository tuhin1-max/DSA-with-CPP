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

void insert(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
    
}

void duplicate(Node* &head){
    int frqn[101] = {0};
    Node* temp = head;
    bool found = false;
    while (temp != NULL)
    {
        if(frqn[temp->val]>0){
            found = true;
            break;
        }
        frqn[temp->val]++;
        temp = temp->next;
    }
    
    if(found){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
    
    
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
        insert(head,tail,val);
    }
    duplicate(head);
    return 0;
}