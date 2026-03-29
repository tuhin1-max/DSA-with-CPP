#include<bits/stdc++.h>
using namespace std;

int main(){
    // constructor call (Note khata)
    // 1 
    string s("hello");
    cout << s << endl;
    // 2 
    string a("hello World",4);
    cout << a << endl;

    // 3
    string s1 = "hello World";
    string t (s1,2); // 2 ar akhane joto lekhbo string ae samne thake toto bad jabe
    cout << t << endl;

    // 4

    string s4(5,'a');
    cout << s4 << endl;
    return 0;
}