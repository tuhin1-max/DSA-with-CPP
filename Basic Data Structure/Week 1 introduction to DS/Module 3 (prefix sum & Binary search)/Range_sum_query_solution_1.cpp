// Bruteforce way : problem solve any way
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){ // o(n)
        cin >> v[i];
    }

    while(q--){ //o(q)
        int l,r;
        cin >> l >> r;
        int sum = 0;
        for(int i=l;i<=r;i++){ // o(n)
            sum +=v[i];
        }

        cout << sum << endl; 

    }
    // ------------------------------------------
            //time complexity   0(q*n)
    return 0;
}