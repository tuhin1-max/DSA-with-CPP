#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }

        int pop(){
            int x = v.back();
            v.pop_back();
            return x;
        }

        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
};

int main(){
    myStack st1;
    myStack st2;
    
    int n,m;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    
    cin >> m;
    
    for(int i=0;i<m;i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if(st1.size() != st2.size()){
        cout << "NO" << endl;
        return 0;
    }
    
    bool temp = true;
    while (!st2.empty()){       
        if(st1.pop() != st2.pop()){
            temp = false;
            break;
        }
        
    }

    if(temp){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
    return 0;
}