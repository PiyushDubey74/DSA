#include<bits/stdc++.h>
using namespace std;
int main (){

  int arr[5]={1,2,3,4,5};
  int *ptr= arr;
  // Print the address of first element OR 0th index
  cout<<arr<<endl;
  cout<<arr+0<<endl;
  cout<<&arr[0]<<endl;
  cout<<ptr<<endl;
  
  // Print address of second element OR 1st index
  cout<<arr+1<<endl;
  cout<<&arr[1]<<endl;

  // Print the value of 0th index
  cout<<arr[0]<<endl;
  cout<<*arr<<endl;
  cout<<*(arr+0)<<endl;
  cout<<*ptr<<endl;
  
  // Print saare address ko 
  for(int i=0;i<5;i++){
    cout<<arr+i<<endl;
  }

  // Print all the value 
  for(int i=0;i<5;i++){
    cout<<*(arr+i)<<endl;
  }
  // Print through ptr
  for(int i=0;i<5;i++){
    cout<<*ptr;
    ptr++;
  }

    return 0;

}
