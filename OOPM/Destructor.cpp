#include<bits/stdc++.h>
using namespace std;

  class Customer
  {
    string  name;
    int * data;

    public :

    Customer(string name)
    {
        // name="Rohit";
        // data=new int ;
        // *data=10;
        // cout<<"Constructor is called\n";
        this-> name=name;
        cout<<"Constructor name is "<<name<<endl;
    }
    //Destructor
    ~Customer()
    {
        // delete data;
        // cout<<"Destructor is called \n";
        cout<<"Destructor name is "<<name<<endl;
    }
  };

int main ()
{

  Customer A1("1"),A2("2"),A3("3");

    return 0;

}



