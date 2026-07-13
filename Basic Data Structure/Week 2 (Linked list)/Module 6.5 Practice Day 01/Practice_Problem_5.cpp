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

void sort(Node* head,int index){
    Node* temp = head;
    int found;
    for(int i=0;i<index-1;i++){
        if(temp->val <= temp->next->val){
            found = 0;
        }
        else{
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if(found==0){
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
    int count = 0;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        count++;
        insert(head,tail,val);
    }

    int index = count;

    sort(head,index);
    
    return 0;
}