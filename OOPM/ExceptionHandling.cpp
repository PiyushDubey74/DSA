#include<bits/stdc++.h>
using namespace std;

   class customer
   {
    string name;
    int balance ,account_number;

    public:

    customer(string name ,int balance,int account_number)
    {
        this->name =name;
        this->balance=balance;
        this->account_number=account_number;
    };

  // deposit
  void deposit(int amount)
  {
       if(amount<=0)
        throw "amount should be greater than 0\n";
    
        balance+=amount;
        cout<<amount<<" rs is credited successfully\n";
    
    
  }
    //withdraw
    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
           balance-=amount;
           cout<<amount<<" rs withdraw successfully\n";
        }
        else if(amount<0)
        {
            throw "amount should be greater than 0\n";
        }
        else
        {
            throw "Your balance is low";
        }
    }

   };



int main()
{
   customer c1("Piyush",5000,10);
   try{
   c1.withdraw(6000);
   c1.deposit(100);
   c1.deposit(200);

   }
   catch(const char *e)
   {
    cout<<"Expecption Occured : "<<e<<endl;
   }

    return 0;

}


