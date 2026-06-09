#include<bits/stdc++.h>
using namespace std;

class Mystack{
    public:
    vector<int> v;
    
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }
    
    int top(){
        return v.back();
    }

    bool empty(){
        return v.empty();
    }
};

class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

class Myqueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    
    void push(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        tail = newnode;
    }

    void pop(){
        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL){
            tail = NULL;
        }
    }

    int front(){
        return head->val;
    }

    bool empty(){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    Mystack st;
    Myqueue q;
    
    int n,m;
    cin >> n >> m;

    if(n!=m){
        cout << "NO" << endl;
    }
    else{
        for(int i=0;i<n;i++){   
            int val;
            cin >> val;    
            st.push(val);
        }

        for(int i=0;i<m;i++){
            int val2;   
            cin >> val2;    
            q.push(val2);
        }
        
        bool temp = true;
        while(!st.empty()){
            int st_val = st.top();
            int q_val = q.front();

            if(st_val!=q_val){
                temp = false;
                break;
            }

            st.pop();
            q.pop();
        }

        if(temp){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}