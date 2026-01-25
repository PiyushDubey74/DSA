#include<bits/stdc++.h>
using namespace std;

  class Login{
    private:
    string LogiID,Password;
    public:
    Login():LogiID(""),Password(""){}// This is in line constructor

    // now we are using setter 
    void setID(string id){
        LogiID=id;
    }

    void setPw(string pw){
        Password=pw;
    }

    string getID(){
        return LogiID;
    }
    string getPW(){
        return Password;
    }
  };

  void registration(Login log){
    system("cls");
    string id,pw;
    cout<<"\tEnter Login ID :";
    cin>>id;
    log.setID(id);

    start:
    cout<<"\t Enter A strong Password: ";
    cin>>pw;
    if(pw.length()>=8){
         log.setPw(pw);
    }
    else{
        cout<<"\t Enter Minimum 8 character "<<endl;
        goto start;// jab kabhi user 8 letter sa kaam ka password fill karega to suko else wale statement show hogi uske baad GOTO ka sue sa hmm fir sa start position par chale jayenge re enter the password; 

    }
    ofstream  outfile("D:/file.text", ios::app);   // ka use karte hai file mai data write karne ka liye ;
    if(!outfile){
        cout<<"\tError : File can't Open "<<endl;
    }

    else{
        outfile<<"\t"<<log.getID()<<" : "<<log.getPW()<<endl;
        cout<<"\t You are Registered Successfuly"<<endl;
    }

    outfile.close();
    _sleep(3000); 
  }

   void login(){
    system("cls");
    string id,pw;
    cout<<"\tEnter Login ID";
    cin>>id;

    cout<<"\tEnter Password";
    cin>>pw;

    ifstream infile("D:/file.text");   // we use ifstream to read the data from the file 
    if(!infile){
        cout<<"\tError: File Can't Open! "<<endl;
    }
    else{   // file mai sa data get karna hai uske liya hmm use doo chez karte hai
    string line;
    bool found=false;
    while(getline(infile,line)){  // yah hmara function jo line ko get karta hai yah read karta hai 
        stringstream ss;         // infile mai sa data ko read karega aur line mai la kar write  karega 
        ss<<line;
        string userID,userPW;
        char delimiter;
        ss>>userID>>delimiter>>userPW; // yah boundry set kar deta hai userID ki jisse yah userId value laga show hoti yah next data sa 

     if(id==userID && pw==userPW){
        found=true;
        cout<<"\t Please Wait";
        for(int i=0;i<3;i++){
            cout<<".";
            _sleep(800);
        }
        system("cls");
        cout<<"\t Welcome to this page";

    }

    }
    if(!found){
        cout<<"\tError : Incorrect Login ID Or Password ";
    }
    }
    infile.close();

    _sleep(5000);
   }

int main ()
{
 Login log;


 bool exit=false;
 while(! exit){
  //  system ("cls");// it is used to hide previous output 
    int val;
    cout<<"\t Welcome to the registration & login form"<<endl;
    cout<<"\t*******************************************"<<endl;
    cout<<"\t1.Register"<<endl;
    cout<<"\t2.Login"<<endl;
    cout<<"\t3.Exit"<<endl;
    cout<<"\tEnter Choice: "<<endl;
    cin >> val;

    if(val==1){
       registration(log);
    }
     else if(val==2){
        login();

     }
     else if(val==3){
        system("cls");
        exit=true;
        cout<<"\t Good luck";
        _sleep(3000);
     }
    _sleep(3000);

    
 }


    return 0;
}