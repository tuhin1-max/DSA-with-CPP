#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "Hello World";
    cout << s.size() << endl;
    cout << s.max_size() << endl; //devise kototuku string rakhte parbe
    cout << s.capacity() << endl; //dynamic memory allocate kore size nijer moto bareya ney

    // empty
    
    if(s.empty() == true){
        cout << "Empty" <<endl;
    }

    else{
        cout << "not empty" << endl;
    }

    // resize : resize deya string choto boro duita e kora jay!

    s.resize(45,'t'); 
    //amra resize kore jode string boro kore tahole gurbeg value dey oi gurbeg value jodi na chi tahole akta char rakhte pare!
    
    cout << "resize :" << s << endl;
    // clear
    s.clear() ;
    cout << "clear:" << s << endl;
    return 0;
}