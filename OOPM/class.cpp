#include<iostream>
using namespace std;

 class Student 
 {
    public:// This is the access modifier it will be private by default and we have to make it public to access them outside of the class
    string name;
    int age,roll_number;
    string grade;
 };
 
int main (){
 
    Student S1;
    S1.name="Piyush";
    S1.age=22;
    S1.roll_number=74;
    S1.grade="A+";

    cout<<S1.age<<" "<<S1.name<<" "<<S1.grade<<" "<<S1.roll_number<<" "<<endl;
    Student S2;
    S2.name="Dubey";
    S2.age=20;
    S2.roll_number=64;
    S2.grade="A++";
    cout<<S2.age<<" "<<S2.name<<" "<<S2.grade<<" "<<S2.roll_number<<" ";
    return 0;
}