#include<bits/stdc++.h>
using namespace std;

int main(){
    // ues clear function:
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

    return 0;
}