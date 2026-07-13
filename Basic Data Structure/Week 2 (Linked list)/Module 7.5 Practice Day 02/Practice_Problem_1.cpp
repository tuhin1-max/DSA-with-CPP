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
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    int val2;
    int count=0;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        count++;
        insert_at_tail(head,tail,val);
        
    }

    int count2=0;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        count2++;
        insert_at_tail(head,tail,val2);
        
    }

    if(count == count2){
        cout << "YES" << endl;
    }
    
    else{
        cout << "NO" << endl;
    }

    return 0;
}