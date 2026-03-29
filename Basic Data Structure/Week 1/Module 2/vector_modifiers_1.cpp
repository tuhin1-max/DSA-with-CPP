#include<bits/stdc++.h>
using namespace std;

int main(){
    // copy
    vector<int>v1={10,20,30};
    vector<int>v2;
    v2=v1;
    cout << "copy: ";
    // for(int i=0;i<v2.size();i++){
    //     cout << v2[i] << " ";

    // }

    // or

    for(int x:v2){
        cout<<x<<" ";
    }
    cout << endl;

    // pop_back : last element delete
    vector<int> v3={1,2,3,4,5,6,7};
    v3.pop_back();
    cout << "v3.pop_back: ";
    for(int x1:v3){
        cout<<x1<<" ";
    }
    cout << endl;

    // v.insert
    vector<int>v4={110,220,330,440};
    v4.insert(v4.begin()+2,100);
    cout << "v4.insert: ";
    for(int x2:v4){
        cout<<x2<<" ";
    }
    cout << endl;

    vector<int>v5={11,22,33,44};
    v5.insert(v5.begin()+2,v5.begin(),v5.end());
    cout << "vectro insert: ";
    for(int x3:v5){
        cout<<x3<<" ";
    }
    cout << endl;

    // v.erase
    vector<int> v6={1,3,4,5,4};
    v6.erase(v6.begin()+3);
    cout << "vectro erase: ";
    for(int x4:v6){
        cout<<x4<<" ";
    }
    cout << endl;
    // multiple value erase
    vector<int> v7={10,30,40,50,40};
    v7.erase(v7.begin()+1,v7.begin()+4);
    cout << "multiple value erase: ";
    for(int x5:v7){
        cout<<x5<<" ";
    }
    cout << endl;







    return 0;
}