#include<iostream>
using namespace std;

  class student 
  {
    private:
    string name;
    int age,roll_number;
    string grade;
    // Function Getter and Setter
     public:
     void setname(string s)
     {
        if(s.size()==0)
        {
          cout<<"invalid name"<<endl;
        }
        name=s;
     }
     void setage(int a)
     {
        if(age<0||age>100)
        {
            cout<<"Invalid age";
        }
        age=a;
     }
     void setroll_number(int r)
     {
       roll_number=r;
     }
     void setgrade(string g)
     {
        grade=g;
     }

    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }

    int getroll_number()
    {
        return roll_number;
    }

    string getgrade(int pin)
    {
          if(pin==123)
          return grade;

          return " ";
    }
  };

int main ()
{
   student S1;
    S1.setname("");
    S1.setage(199);
    S1.setroll_number(74);
    S1.setgrade("A+");
    S1.getname( );
    S1.getage( );
    cout<<S1.getroll_number()<<endl;
    cout<<S1.getgrade(1234)<<endl;
    return 0;
    
}