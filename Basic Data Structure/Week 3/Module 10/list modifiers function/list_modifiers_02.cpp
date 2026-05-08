#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "erase function:" << endl;
    list<int> l = {10,20,30,40,20,20,70};
    // l.erase(next(l.begin(),3));
    l.erase(next(l.begin(),2),next(l.begin(),5));
    for(int val : l){
        cout << val << endl;
    }

    cout << "replace function:" << endl;
    replace(l.begin(),l.end(),20,100);
    for(int val : l){
        cout << val << endl;
    }
    
    cout << "find function:" << endl;
    auto it = find(l.begin(),l.end(),100);
    
    if(it == l.end()){
        cout << "Not found" << endl;
    }

    else{
        cout << "found" << endl;
    }

    for(int val : l){
        cout << val << endl;
    }
    return 0;
}