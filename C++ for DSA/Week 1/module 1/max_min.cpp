#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    // max & min 
    // if(a<b)
    // {
    //     cout << a << endl;
    // }

    // else
    // {
    //     cout << b << endl;
    // }
    cout << min({a,b,c,d}) << endl;
    cout << max({a,b,c,d}) << endl;


    return 0;
}