#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10,20,30};
    list<int> l2;
    l2 = l;
    // l2.assign(l.begin(),l.end());
    for(int val : l2){
        cout << val << endl;
    }

    cout << "push_back & push_front:" << endl;
    l.push_back(40);//insert at tail
    l.push_front(100);//insert atr head
    for(int val : l){
        cout << val << endl;
    }

    cout << "pop_back & pop_front:" << endl;
    l.pop_back();//delete at tail
    l.pop_front();//delete atr head
    for(int val : l){
        cout << val << endl;
    }

    cout << "next itaretor:" << endl;
    cout << *next(l.begin(),1) << endl;//index

    cout << "Insert at any position:" << endl;
    list<int>l3 = {1,2,3,4,5};
    l.insert(next(l.begin(),2),l3.begin(),l3.end());//(index,value)
    for(int val : l){
        cout << val << endl;
    }

    return 0;
}