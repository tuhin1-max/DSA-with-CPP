#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello";
    string s2 = "world";
    // duita string sum
    s+=s2; // s= s+s2;
    // aei same kaj ta s.append(s2) deya kora jay

    cout << "string_sum: " << s << endl;

    // string ar sesh a akta char sum korte 
    s.push_back('A'); // ari kaj ta s+='A' deya o kora jay

    cout << "string ar sesh a akta char sum : "<< s<<endl;

    // string ar last char remove korte
    s.pop_back();
    cout << "string ar last char remove: " << s << endl;
    return 0;
}