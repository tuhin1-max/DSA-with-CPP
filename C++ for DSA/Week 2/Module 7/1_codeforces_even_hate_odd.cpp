#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        if(n%2!=0){
            cout << "-1" << endl;
            continue;
        }

        long long even_count = 0;
        long long odd_count = 0;

        for(int i=0;i<n;i++){
            if(a[i]%2 == 0){
                even_count++;
            }

            else{
                odd_count++;
            }
        }

        long long demo_res = abs(even_count-odd_count);

        long long res = demo_res/2;
        cout << res <<endl;
    }
    return 0;
}