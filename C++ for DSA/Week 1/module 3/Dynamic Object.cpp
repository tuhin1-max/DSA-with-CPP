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
int main(){
    // Constructor call
    Student tuhin(45,5,3.2);

    Student* sagor = new Student(10,5,4.56) ;//heap memory

    cout << tuhin.roll << " " << tuhin.cls << " " << tuhin.gpa << endl;
    cout << (*sagor).roll << " " << sagor->cls << " " << sagor->gpa << endl;
    return 0;
}