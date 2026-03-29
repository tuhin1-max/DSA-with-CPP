#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int total = 0;
    for(int i=0;i<n;i++){
        total += a[i];
    }

    int l_sum = 0;
    int res = -1;
    for(int i=0;i<n;i++){
        int r_sum = total - a[i] - l_sum;
        if(l_sum == r_sum){
            res = i;
            break;
        }
        l_sum += a[i];
    }

    cout << res << endl;
    return 0;
}