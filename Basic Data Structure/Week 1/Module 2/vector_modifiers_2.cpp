#include<bits/stdc++.h>
using namespace std;

int main(){
    // replace(v.begin(),v.end(),kake replace korte chi,kake bosate chi)
    vector<int>v={1,2,3,4,5,6};
    replace(v.begin(),v.end(),2,100);
    cout<< "replace: ";
    for(int x:v){
        cout << x << " ";
    }
    cout << endl;

    // find(v2.begin(),v.end(),kake ghujci)
    vector<int>v2={20,43,50,60,67};
    auto it = find(v2.begin(),v.end(),100);
    if(it == v2.end()){
        cout<<"Not found";

    }

    else{
        cout << "found";
    }


    return 0;
}