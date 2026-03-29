#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string s;
    int roll;
    int math;
    int english;
    Student(string s,int roll,int math,int english)
    {
        this->s = s;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    // function
    void total(){
        cout << "Total marks of: " << s << "=" <<math + english << endl;
    }

};
int main(){

    Student sakib("Sakib",2,90,90);
    sakib.total(); //function call

    Student rakib("Rakib",3,89,80);
    rakib.total(); //function call

    
    return 0;
}