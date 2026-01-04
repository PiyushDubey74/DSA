#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
  string name;
  int roll_number,age;
  string grade;

};
int main (){
Student *S = new Student;
 (*S).name = "PIYUSH";
 (*S).age=22;
 (*S).roll_number=74;
 (*S).grade="A+";

 cout<<S->name<<" ";



    return 0;
}