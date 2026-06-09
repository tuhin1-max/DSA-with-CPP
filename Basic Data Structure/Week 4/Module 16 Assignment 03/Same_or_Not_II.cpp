#include<bits/stdc++.h>
using namespace std;

class Mystack{
    public:
    vector<int> v;
    
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }
    
    int top(){
        return v.front();
    }

    bool empty(){
        if(v.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};

class Myqueue{
    public:
    vector<int> v;
    
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }
    
    int front(){
        return v.front();
    }

    bool empty(){
        if(v.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Mystack *st;
    Myqueue *q;
    
    int n,m;
    cin >> n >> m;

    if(n!=m){
        cout << "NO" << endl;
    }
    else{
        for(int i=0;i<n;i++){   
            int val;
            cin >> val;    
            st->push(val);
        }

        for(int i=0;i<m;i++){
            int val2;   
            cin >> val2;    
            q->push(val2);
        }
        
        bool temp = true;
        while(!st->empty()){
            int st_val = st->top();
            int q_val = q->front();

            if(st_val!=q_val){
                temp = false;
                break;
            }

            st->pop();
            q->pop();
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