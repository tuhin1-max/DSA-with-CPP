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

void insert_at_head(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
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

void delete_at_head(Node* &head,Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    if(head == NULL){
        tail = NULL;
    }
    delete deleteNode;
}

void delete_at_any_position(Node* &head,int index){
    Node* temp = head;
    for(int i=0;i<index-1;i++){
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_at_tail(Node* &head,Node* &tail,int index){
    Node* temp = head;
    for(int i=0;i<index-1;i++){
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;

}

int size_linked_list(Node* &head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
    
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){
    int t;
    cin >> t;
    Node* head = NULL;
    Node* tail = NULL;

    while(t--){
        
        int x,val;
        cin >> x >> val;

        int size = size_linked_list(head);

        if(x==0){
            insert_at_head(head,tail,val);
            print(head);
        }

        else if(x==1){
            insert_at_tail(head,tail,val);
            print(head);
        }

        else if(x==2){
            if(val < 0 || val >= size){
                print(head);
            }
            else if(val == 0){
                delete_at_head(head,tail);
                print(head);
            }
            else if(val == size-1){
                delete_at_tail(head,tail,val);
                print(head);
            }
            else{
                delete_at_any_position(head,val);
                print(head);
            }

        }

    }
    return 0;
}