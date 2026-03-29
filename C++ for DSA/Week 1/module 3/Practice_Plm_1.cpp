#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:

    char name[100];
    int roll ;
    char sec;
    int math_mark;
    int cls;

    Student(int r, char s, int m_mar,int cl ){
        
        roll = r ;
        sec = s;
        math_mark = m_mar;
        cls = cl;
    }

    

};
int main(){
    Student a(1,'A',55,12);
    strcpy(a.name,"Tuhin");
    Student b(2,'B',99,11);
    strcpy(b.name,"Tanvir");
    Student c(3,'C',88,10);
    strcpy(c.name,"Alif");

    if(a.math_mark > b.math_mark && a.math_mark > c.math_mark){
        cout << a.name << endl;
    }

    else if(b.math_mark > a.math_mark && b.math_mark > c.math_mark){
        cout << b.name << endl;
    }

    else{
        cout << c.name << endl;
    }
    return 0;
}