#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "erase function:" << endl;
    list<int> l = {10,20,30,40,50,60,70};
    // l.erase(next(l.begin(),3));
    l.erase(next(l.begin(),2),next(l.begin(),5));
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}