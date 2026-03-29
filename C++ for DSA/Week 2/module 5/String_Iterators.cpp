#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello World";

    cout << *s.begin() << endl;

    cout << *(s.end()-1) << endl << endl ;
    // for (string :: iterator it = s.begin();it<s.end();it++){
    //     cout << *it << endl ;
    // }
    // string :: iterator = auto
    //  C++ ar 11 version a aei auto ta nai ar por ar gulay ache
    for (auto it = s.begin();it<s.end();it++){
        cout << *it << endl ;
    }
    return 0;
}