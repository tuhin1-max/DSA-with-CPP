#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "1.";
    list<int>l;
    cout << "size: " << l.size() << endl;

    cout << "2.";
    list<int>l1(10);//l1(size)
    cout << "size: " << l1.size() << endl;

    cout << "3.";
    list<int>l2(10,5);//l1(size,value)
    cout << "1st value: " << *l2.begin() << endl;
    cout << "4.All value:" << endl;
    // for(auto it = l2.begin();it!=l2.end();it++){
    //     cout << *it << endl;
    // }
    for(int val : l2){
        cout << " " << val << endl;
    }

    cout << "5. {copy list}" << endl;
    list<int> l3 = {1,2,3,4,5};
    list<int> l4(l3);//copy l3
    
    for(int val : l4){
        cout << " " << val << endl;
    }

    cout << "6. {copy array}" << endl;
    list<int> l5 = {1,2,3,4,5};
    int a[] = {10,20,30} ;
    list<int> l6(a,a+3); //array copy
    
    for(int val : l6){
        cout << " " << val << endl;
    }

    cout << "7. {copy vector}" << endl;
    vector<int> v = {100,200,300};
    list<int> l7(v.begin(),v.end()); //vector copy
    
    for(int val : l7){
        cout << " " << val << endl;
    }

    return 0;
}