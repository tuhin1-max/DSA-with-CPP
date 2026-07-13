#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char> st;
	for(int i=0;i<s.size();i++){
		st.push(s[i]);
	}

	string res = "";
	while(!st.empty()){
		res += st.top();
		st.pop();
	}

	return res;
}
