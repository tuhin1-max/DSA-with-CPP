#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10,20,30,40};
    
    cout << "back function:" << endl;
    cout << l.back() << endl;//tail
    
    cout << "front function:" << endl;
    cout << l.front() << endl;//head
    
    cout << "next function:" << endl;
    cout << *next(l.begin(),2) << endl;//anyposition
    
    return 0;
}