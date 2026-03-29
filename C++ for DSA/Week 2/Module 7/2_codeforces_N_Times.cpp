#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        char ch;
        cin >> n >> ch;
        
        for(int i=0;i<n;i++){
            cout << ch;
            if(i != n-1 ){
                cout << " ";
            }

        }

        cout << endl;
    }
    return 0;
}