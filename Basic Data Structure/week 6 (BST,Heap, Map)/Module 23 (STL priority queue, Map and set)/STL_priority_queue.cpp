#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Max priority Queue:" << endl;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(2);
    cout << pq.top() << endl;
    pq.pop();
    pq.pop();
    cout << pq.top() << endl;

    cout << "Min priority Queue:" << endl;

    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(10);
    pq2.push(5);
    pq2.push(30);
    cout << pq2.top() << endl;
    pq2.push(2);
    cout << pq2.top() << endl;
    pq2.pop();
    cout << pq2.top() << endl;

    return 0;
}