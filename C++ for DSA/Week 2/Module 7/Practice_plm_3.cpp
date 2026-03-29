#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline (cin,s);
    string s2;
    cin >> s2;
    int count =0;
    stringstream ss(s);
    string word;
    while(ss>>word){
        if(word==s2){
            count++;
        }
    }
    
    cout << count;
    return 0;
}