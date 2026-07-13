#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> l;
    int x;
    while(cin >> x && x!=-1){
        l.push_back(x);
    }

    l.sort();
    l.unique();
   
    for(int val : l){
        cout << val << " ";
    }

    return 0;
}