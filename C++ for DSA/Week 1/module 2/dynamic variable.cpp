// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//           // new datatype 
//     int *p = new int ;
//     *p = 10;
//     cout << *p << endl;
//     return 0;
// }

// Proved

#include<bits/stdc++.h>
using namespace std;
int *p;
void fun ()
{
    // int x = 10;
    // p = &x;
    int *x = new int ;
    *x = 10;
    p = x;
    cout << "Fun -->" << *p << endl;
    return;
}
int main(){
    fun();
    cout << "Main -->" << *p << endl;
    return 0;
}