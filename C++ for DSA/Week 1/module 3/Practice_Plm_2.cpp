#include<bits/stdc++.h>
using namespace std;

class Student 
{

    public:
    int jersey_no ;
    char country[10000];

};
int main(){

    Student *dhoni = new Student;
    dhoni->jersey_no = 03;
    strcpy(dhoni->country,"India");

    Student *kohli = new Student;
    strcpy(kohli->country,dhoni->country);
    kohli->jersey_no = dhoni->jersey_no;
    cout << kohli->jersey_no << endl << kohli->country<< endl ; 
    cout<< "Delete ar age dhone";
    cout << dhoni->country << endl << dhoni->jersey_no << endl;

    cout<< "Delete ar por dhoni";

    delete dhoni;

    cout << dhoni->country << endl << dhoni->jersey_no ;

    
    
    return 0;
}