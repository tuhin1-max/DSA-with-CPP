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

void insert_at_tail2(Node* &head2,Node* &tail2,int val2){
    Node* newnode = new Node(val2);
    if(head2 == NULL){
        head2 = newnode;
        tail2 = newnode;
        return;
    }

    tail2->next = newnode;
    tail2 = tail2->next; 
}

int count_linked_list(Node* &head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
    
}

int count_linked_list2(Node* &head2){
    Node* temp = head2;
    int count2 = 0;
    while (temp != NULL)
    {
        count2++;
        temp = temp->next;
    }

    return count2;
    
}

void same_to_same(Node* head,Node* head2){
    int same = 1;
    for(Node* i=head,*j=head2;i!=NULL && j!=NULL;i=i->next,j=j->next){
        if(i->val!=j->val){
            same = 0;
            break;
        }
        
    }

    if(same == 1){
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
        insert_at_tail(head,tail,val);

    }
    
    int count1 = count_linked_list(head);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if(val2 == -1){
            break;
        }
        insert_at_tail2(head2,tail2,val2);
    }
    int count2 = count_linked_list2(head2);

    if(count1 == count2){
        same_to_same(head,head2);
    }

    else{
        cout << "NO" << endl;
    }
    
    
    return 0;
}