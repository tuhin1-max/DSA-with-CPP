#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

    
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int found = 1;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                found = 0;
                break;
            }
        }

        if(found == 1){
            cout << "YES" << endl;

        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}