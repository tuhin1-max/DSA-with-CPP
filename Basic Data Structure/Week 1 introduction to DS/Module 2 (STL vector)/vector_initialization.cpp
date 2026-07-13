#include<bits/stdc++.h>
using namespace std;

int main(){
    // Type 1
    vector<int> v;
    cout << "Type 1: " <<v.size()<< endl;
    
    // Type 2
    vector<int>v2(5); //n=5 
    cout << "Type 2: " << v2.size() << endl;

    // Type 3
    vector<int>v3(10,-1); //n=10
    cout << "Type 3: ";
    for(int i=0;i<v3.size();i++){
        cout<< v3[i] << " ";
    } 

    cout<<endl;
    cout << "Type 3: " << v3.size() << endl;

    // Type 4
    vector<int>v4(10,-1);
    vector<int>v5(v4);//copy v4
    cout<<"Type 4: ";
    for(int i=0;i<v5.size();i++){
        cout<< v5[i] << " ";
    }
    cout << endl;

    // Type 5: convert array to vector
    int a[5] = {1,2,3,4,5};
    vector<int>v6(a,a+5);//sort ar moto
    cout<<"Type 5: ";
    for(int i=0;i<v6.size();i++){
        cout<< v6[i] << " ";
    }

    cout << endl;

    // Type 6:
    vector<int>v7={1,2,3,4,5,6,7};
    cout<<"Type 6: ";
    for(int i=0;i<v7.size();i++){
        cout<< v7[i] << " ";
    }
    cout << endl;
    
    return 0;
}