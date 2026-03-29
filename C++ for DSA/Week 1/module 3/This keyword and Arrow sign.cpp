#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    int roll ;
    int cls;
    double gpa;

    // Constructor --> 1.type of function
    //                 2. Constructor kono return kore na 
    //                 3. Constructor ar name hobe akdom class ar name a

    Student(int roll,int cls,double gpa){
        // variable ar name same rakhle this keyword use korte hoy
        this->roll = roll; //this holo keyword (pointer)
        this->cls = cls; //this->cls = cls; ar (*this).cls = cls (SAME)
        (*this).gpa = gpa;
    }
    
};
int main(){
    // Constructor call
    Student tuhin(45,5,3.2);

    Student sagor(2,5,5.00);

    cout << tuhin.roll << " " << tuhin.cls << " " << tuhin.gpa << endl;
    cout << sagor.roll << " " << sagor.cls << " " << sagor.gpa << endl;
    return 0;
}