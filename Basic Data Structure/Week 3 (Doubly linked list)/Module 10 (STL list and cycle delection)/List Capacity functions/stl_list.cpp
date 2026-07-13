#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "ues clear function:" << endl;
    list<int>l(10,5);
    cout << l.size() << endl;
    l.clear();
    cout << l.size() << endl;

    if(l.empty()){
        cout << "Empty" << endl;
    }

    for(int val : l){
        cout << val << endl;
    }

    cout << "ues resize function:" << endl;
    
    list<int>l2(10,7);
    l2.resize(2);
    for(int val : l2){
        cout << val << endl;
    }
    return 0;
}