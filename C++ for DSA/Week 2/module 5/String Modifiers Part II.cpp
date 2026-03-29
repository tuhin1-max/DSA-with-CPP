#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello World";
    // replace ar insert same kaj kora jay
    // insert
    s.insert(5,"pias");
    cout << "insert: " << s << endl;
    // replace 
    // s.replace (koto number index thake,koyta index delete korte chan,delete ar jaygay ki rakhte chan)
    s.replace(11,0,"Bangladesh");

    cout << "replace: " << s << endl;

    //     (index sure , suru thake ar koto index)
    s.erase(6,2); // index 5 number thake pura ta delete kore deba

    cout << "erase: " << s << endl;
    s = "Gello"; // = sign deya string assign kora jay
    // a chara o s.assign("Gello") use korte pare 
    cout << "assign: " <<s << endl;
    
    
    return 0;
}