#include<bits/stdc++.h>
using namespace std;

class Customer
{
   string name;
   int account_number;
   int balance;
   int *roi;

   public:
  // Default Constructor
   Customer()
   {
    cout<<"Hello constructor \n";
    name="Piyush";
    account_number=5;
    balance=100; 
    roi=new int [100];
   }
   // Parameterized Constuctor kuki yah parameter le raha hai .
//    Customer(string name,int account_number,int balance)
//    {
//     this->name=name;
//     this->account_number=account_number;
//     this->balance=balance;
//    }
  // Constructor Overloading because here there are three function of same name but they are differet in the parameter that's why.
   Customer(string a,int b)
   {
    name=a;
    account_number=b;
    balance=50;
   }

   // Inline Constructor
    inline Customer(string a,int b,int c):name(a),account_number(b),balance(c){

    }
   void display()
   {
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
   }
   // Copy Constructor
   Customer(Customer &B)
   {
      name=B.name;
      account_number=B.account_number;
      balance=B.balance;
   }

};
int main (){

 Customer A1;
 Customer A2("Dubey",22,1004);
 Customer A3("G",23);
 A1.display();
 A2.display();
 A3.display();
 Customer A4(A3);
 A4.display();
}