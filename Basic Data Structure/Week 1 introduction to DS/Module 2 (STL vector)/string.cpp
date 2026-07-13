// ki vul ache bujtaci na video te bhai aei vabe e shikhica!

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    cin.ignore();
    vector<string>v(n);
    for(int i=0;i<n;i++){
        // cin >> v[i];
        getline(cin,v[i]);
    }

    for(string s:v ){
        cout<<s<<endl;
    }

    return 0;
}