#include<bits/stdc++.h>
using namespace std;

  class Human 
  {
    string Religion,colour;
    public:
    string name;
    int age,weight;

  };

  class student:protected Human
  {
   private:
    int roll_number,fees;

    public:

    student(string name,int age,int weight,int roll_number,int fees)
    {
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_number=roll_number;
        this->fees=fees;

    }

    void display(){
   cout<<name<<"\n age is \n"<<age<<"weight is  \n"<<weight<<"roll_number is \n"<<roll_number<<"fees is \n"<<fees<<endl;;

    }

  };

  class Teacher:public Human
  {
    
    int salary,id;

    public:
    Teacher(string name)
    {
        this->name=name;
    }

    void fun(){
        cout<<name <<" name is "<<endl;
    }
  };



int main ()
{

    student A("Piyush",12,400,23,200);
  
    A.display();
    Teacher b("Dubey");
    b.fun();
    return 0;
}