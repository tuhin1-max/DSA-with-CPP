#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    queue<int> q;

    int n,m;
    cin >> n >> m;

    if(n!=m){
        cout << "NO" << endl;
    }
    else{
        for(int i=0;i<n;i++){   
            int val;
            cin >> val;    
            st.push(val);
        }

        for(int i=0;i<m;i++){
            int val2;   
            cin >> val2;    
            q.push(val2);
        }
        
        bool temp = true;
        while(!st.empty()){
            int st_val = st.top();
            int q_val = q.front();

            if(st_val!=q_val){
                temp = false;
                break;
            }

            st.pop();
            q.pop();
        }

        if(temp){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}