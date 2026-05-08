#include<bits/stdc++.h>
using namespace std;

int main(){
    // ues clear:
    list<int>l(10,5);
    cout << l.size() << endl;
    l.clear();
    cout << l.size();
    for(int val : l){
        cout << val << endl;
    }

    return 0;
}