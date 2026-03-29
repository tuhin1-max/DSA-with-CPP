#include<bits/stdc++.h>
using namespace std;

int main(){
    // Type 1
    vector<int>v={1,3,4,5,6};
    cout<<v[3]<<endl;
    // Type 2
    // v.at()  same type 1 ar moto

    // Type 3
    cout << "back: " << v.back()<<endl;
    
    // Type 4
    cout << "front: " << v.front()<<endl;

    return 0;
}