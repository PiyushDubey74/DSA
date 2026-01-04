#include<bits/stdc++.h>
using namespace std;

 class Customer
 {
  string name;
  int account_number,balance;
  static int total_customer;

  public:

  Customer(string name,int account_number,int balance)
  {
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    total_customer++;
  }

  void display()
  {
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
  }
 };

 int Customer::total_customer=0;

int main (){

  Customer A1("Piyush",1,1000);
  Customer A2("Dubey",2,1004);
  Customer A3("Dubey",2,1004);
  A1.display();
  A2.display();
  A3.display();
    return 0; 
}