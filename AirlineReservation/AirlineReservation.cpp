#include<bits/stdc++.h>
// #include<fstream>
// #include<windows.h>
// #include<sstream>
using namespace std;

   class Airline {
    string Flight, Des,Dep;

    int Seats;

    public:
    Airline(string Flight,string Des,string Dep,int Seats){
        this->Flight=Flight;
        this->Dep =Dep;
        this->Des=Des;
        this->Seats=Seats;
    }
   // getter functions
   string getflight(){
    return Flight;
   }
    
   string getDes(){
    return Des;
   }

   string getDep(){
    return Dep;
   }

   int getSeat(){
    return Seats;
   }

     

   }; 

int main (){

Airline flight1("F101","UAE","England",50);
Airline flight2("F201","Italy","India",40);
Airline flight3("F301","Finland","Europe",2);
    
ofstream out("D:/flight.txt");
if(!out){
    cout<<"Error:flie can't Open"<<endl;
}
else{
    cout<<"\t"<<flight1.getflight()<<" : "<<flight1.getDes()<<": "<<flight1.getDep()<<":"<<flight1.getSeat()<<endl;

    cout<<"\t"<<flight2.getflight()<<" : "<<flight2.getDes()<<": "<<flight2.getDep()<<":"<<flight2.getSeat()<<endl;

    cout<<"\t"<<flight3.getflight()<<" : "<<flight3.getDes()<<": "<<flight3.getDep()<<":"<<flight3.getSeat()<<endl;

    cout<<"Data Saved Successfuly !"<<endl;
    out.close();
}
bool exit=false;
while(!exit){
    system("cls");
    cout<<"\t Welcome To Airline Management Systtem"<<endl;
    cout<<"\t **************************************"<<endl;
    cout<<"\t 1. Reserve A Seat";
    cout<<"\t 2.Exit"<<endl;
    cout<<"\t Enter Your Choice : ";
}

}


