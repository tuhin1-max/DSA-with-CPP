#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    char sec;
    int id;

};
int main(){
    int n;
    cin>> n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].nm >> a[i].cls >> a[i].sec >> a[i].id;
    }

    for(int i=0;i<n/2;i++){
        char temp = a[i].sec;
        a[i].sec = a[n-i-1].sec;
        a[n-i-1].sec = temp;
    }

    for(int i=0;i<n;i++){
        cout <<  a[i].nm << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;
    }


    return 0;
}