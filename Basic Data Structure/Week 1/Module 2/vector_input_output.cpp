#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    for(int i=0;i<n;i++){
        cout << v[i] <<" ";
    }

    cout<<endl<<"2 way"<<endl;

    int n1;
    cin>>n1;
    vector<int>v1;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    for(int i=0;i<n;i++){
        cout << v[i] <<" ";
    }

    return 0;
}