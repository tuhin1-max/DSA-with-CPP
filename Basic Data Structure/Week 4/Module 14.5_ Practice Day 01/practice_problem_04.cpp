#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        q.push(val);
    }
    
    stack<int>st;
    
    while (!q.empty())
    {
        int val = q.front();
        st.push(val);
        q.pop();
    }
    
    queue<int>q2;

    while (!st.empty())
    {
        int val = st.top();
        q.push(val);
        st.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}