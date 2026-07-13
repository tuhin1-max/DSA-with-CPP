#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        // int* next; akhane asole int use kore jabe na karon akhane pointer kono 
        // int ke point korce na akhane pointer node ke point kortace
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
int main(){
    Node a(10),b(20),c(30); // akhane 3 node allocat hobe memory te jekhane akta value ar akta pointer thakbe
    
    a.next = &b;
    b.next = &c;
    //cout << a.val << " " << b.val << " " << c.val << endl;
    cout << a.val << endl;
    cout << a.next->val << endl; // akhane (*a.next) mane e b
    return 0;
}