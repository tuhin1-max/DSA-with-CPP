#include<bits/stdc++.h>
using namespace std;

int main(){
    // v.size
    // v.max_size()
    vector<int>v;
    cout<< "max_size: " <<v.max_size()<<endl;
    // v.push_back()
    vector<int>v2;
    cout<<"v2.capacity: "<<v2.capacity() << endl;
    v2.push_back(10);
    cout<<"v2.capacity: "<<v2.capacity() << endl;

    // clear
    vector<int>v3;
    v3.push_back(10);
    v3.push_back(20);
    v3.push_back(30);
    cout<<"v3.size: " << v.size() <<endl;
    v3.clear();
    cout <<"v3 clear korar por size: " << v3.size() << endl;
    cout << "clear korar por index value: " << v3[0] << endl; 

    // v.enpty--> return kore ture false

    // v.resize

    vector<int>v4;
    v4.push_back(10);
    v4.push_back(20);
    v4.push_back(30);
    v4.resize(7,100);
    cout << "v4.resize: ";
    for (int value : v4) {
        cout << value << " ";
    }
    cout << endl;

    

    return 0;
}