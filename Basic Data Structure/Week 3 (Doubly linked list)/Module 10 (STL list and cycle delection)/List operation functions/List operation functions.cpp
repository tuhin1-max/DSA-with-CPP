#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "remove function:" << endl;
    list<int> l = {20,30,40,50,30,60,60,10};
    l.remove(10);

    for(int val : l){
        cout << val << endl;
    }

    cout << "sort function:" << endl;
    l.sort();
    for(int val : l){
        cout << val << endl;
    }

    cout << "descending order:" << endl;
    l.sort(greater<int>());
    for(int val : l){
        cout << val << endl;
    }

    cout << "unique function:" << endl;//must list sorted
    l.unique();
    for(int val : l){
        cout << val << endl;
    }

    cout << "reverse function:" << endl;//must list sorted
    l.reverse();
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}