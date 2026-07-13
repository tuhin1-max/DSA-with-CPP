#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;
    for(int i=1;i<=k;i++){
        int val = q.front();
        q.pop();
        st.push(val);
    }

    queue<int> res_q;
    while(!st.empty()){
        int val = st.top();
        st.pop();
        res_q.push(val);
    }

    while(!q.empty()){
        int val = q.front();
        q.pop();
        res_q.push(val);
    }

    return res_q;
   
}
