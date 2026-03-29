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

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    int count=0;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}