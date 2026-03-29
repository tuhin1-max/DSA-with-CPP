#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string s1;
        string s2;

        cin >> s1 >> s2;
        
        int pos ;
        while ((pos= s1.find(s2))!=-1)
        {
            s1.replace(pos,s2.length(),"#");
        }
        cout<< s1 << endl;
    }
    return 0;
}