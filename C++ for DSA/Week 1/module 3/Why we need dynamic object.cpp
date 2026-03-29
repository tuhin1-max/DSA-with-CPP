#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    int roll ;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa){
        
        this->roll = roll; 
        this->cls = cls; 
        (*this).gpa = gpa;
    }
    
};

Student* fun()
{
    Student tuhin(45,5,3.2);  //static obj normal variable ar moto kaj kora!
    Student* p = &tuhin;
    return p;
}
int main(){
    // Constructor call
   
    Student* p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}