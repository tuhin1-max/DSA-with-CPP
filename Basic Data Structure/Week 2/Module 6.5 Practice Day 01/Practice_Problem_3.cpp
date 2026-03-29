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

void even(Node* head,int &index){
    Node* temp = head;
    for(int i=0;i<=index;i++){

        if(i==index-1){
            cout << temp->val << " ";
        }
        
        if(i==index){
            cout << temp->val << endl;
            break;
        }
        temp = temp->next;
    }
}

void odd(Node* head,int &index){
    Node* temp = head;
    for(int i=0;i<=index;i++){
        
        if(i==index){
            cout << temp->val << endl;
            break;
        }
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    int count=0;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        count++;
        insert(head,tail,val);
    }

    if(count%2==0){//even
        int index = count/2;
        even(head,index);
    }
    else{//odd
        int index = count/2;
        odd(head,index);
    }
    return 0;
}