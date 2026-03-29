#include<bits/stdc++.h>
using namespace std;
int *fun(){
    // int a[5]; //stack memory
    int *a = new int [5]; //heap memory
    return a;
}
int main(){
    int *a = fun();
    return 0;
}