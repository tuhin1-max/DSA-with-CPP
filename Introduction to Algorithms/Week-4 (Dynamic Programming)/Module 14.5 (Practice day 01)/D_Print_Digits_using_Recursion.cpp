#include<bits/stdc++.h>
using namespace std;

void digit(int n)
{
    if(n==0){
        return;
    }
    int num = n%10;
    digit(n/10);
    cout << num << " ";
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n==0){
            cout << 0;
        }
        digit(n);
        cout << endl;
    }
    return 0;
}