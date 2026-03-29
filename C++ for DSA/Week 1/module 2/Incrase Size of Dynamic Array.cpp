#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a[3];//stack array
    int *a = new int[3];//dynamic array
    for(int i=0 ;i<3;i++){
        cin >> a[i];
    }

    int *b = new int[5];

    for(int i=0;i<3;i++){
        b[i]=a[i];
    }

    b[3]=40;
    b[4]=50;

    delete[] a; 
    //dynamic array khatera ata e subida je jai array ta
    //ar lagbe na seta delet kora jay ate memory free thake 

    for(int i=0;i<5;i++){
        cout << b[i] << " ";
    }
    return 0;
}