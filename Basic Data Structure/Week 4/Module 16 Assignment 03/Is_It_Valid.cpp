#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        stack<char>st;
        string s;
        cin >> s;

        for(char c : s){
            st.push(c);
        }

        int count = 0;
        int count2 = 0;

        while(!st.empty()){
            char c2 = st.top();
            if(c2=='0'){
                count++;
            }
            else if(c2=='1'){
                count2++;
            }

            st.pop();
        }

        if(count == count2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

        
    }
    return 0;
}