#include<bits/stdc++.h>
using namespace std;
class Student 
{
    // nm, cls, s, id, math_marks and eng_marks 
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_mark ;
    int eng_mark;


};

bool cmd(Student l, Student r){
    if(l.math_mark+l.eng_mark>r.math_mark+r.eng_mark){
        return true;

    }

    if(l.math_mark+l.eng_mark<r.math_mark+r.eng_mark){
        return false;

    }

    else{
        if(l.id < r.id){
            return true;
        }
        else{
            return false;
        }
    }

}
int main(){
    int n;
    cin>> n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mark >> a[i].eng_mark; 

    }

    sort(a,a+n,cmd);

    for(int i=0;i<n;i++){
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_mark << " " << a[i].eng_mark << endl;
    }


    return 0;
}


