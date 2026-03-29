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

void insert_at_head(Node* &head , int val){
    Node* newnode = new Node(val);
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
    tail = tail->next;
    
}

void insert_at_any_position(Node* &head,int index,int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    
    for(int i=0;i<index-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
        insert_at_tail(head,tail,val);
    }

    int q,val1;
    while(cin >> q >> val1){
        if(q>count){
            cout << "Invalid" << endl;
        }
        else if(q==0){
            insert_at_head(head ,val1);
            print_linked_list(head);
            count = count + 1;
        }

        else if(q==count){
            insert_at_tail(head,tail,val1);
            print_linked_list(head);
            count = count + 1;
        }

        else if(q>0 && q<=count){
            int index = q;
            insert_at_any_position(head,index,val1);
            print_linked_list(head);
            count = count + 1;
        }
    }

    return 0;
}