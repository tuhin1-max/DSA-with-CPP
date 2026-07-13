#include <bits/stdc++.h> 
class minStack
{
	
	public:
		
		stack<int> st;
		stack<int> min_st;
		minStack() 
		{ 
			
		}
		
		void push(int num)
		{
			st.push(num);

			if (min_st.empty())
			{
				min_st.push(num);
			}
			else
			{
				min_st.push(min(num, min_st.top()));
			}
		}
		
		
		int pop()
		{
			if(st.empty()){
				return -1;
			}
			
			int x = st.top();
			st.pop();
			min_st.pop();

			return x;
		}
		
		int top()
		{
			if(st.empty()){
				return -1;
			}
			return st.top();
		}
		
		int getMin()
		{
			if(min_st.empty()){
				return -1;
			}
			return min_st.top();
		}
};