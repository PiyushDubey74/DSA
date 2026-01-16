#include<iostream>
using namespace std;
int main (){

     int n;
     cout<<"Enter a number";
     cin>>n;
      
    
   for(int i=1;i<=n;i++){
      
     for(char ch='A';ch<='A'+n-i-1;ch++){
        cout<<ch<<" ";
      
     }
   
       cout<<endl;

   }
 
    return 0;
}