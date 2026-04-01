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



void search_value(Node* &head,int &search){
    int idx = 0;
    int found = 0;
    for(Node* i=head;i!=NULL;i=i->next){
        if(i->val == search){
            cout << idx << endl;
            found = 1;
            break;
        }

        idx++;
    }

    if(found == 0){
        cout << "-1" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        
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
        int search;
        cin >> search;
        search_value(head,search);
    
    }
    return 0;
}