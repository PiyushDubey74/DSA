#include<iostream>
using namespace std;
int main (){
 
     int n;
    cout<<"Enter the number of element";
    cin>>n;

    int*arr= new int[n];
    cout<<"Enter"<<n<<"integers"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
   int largest =arr[0];
   for(int i=0;i<n;++i){
    if(arr[i]>largest){
        largest =arr[i];
    }
   }
   cout<<"The largest number is "<<largest<<endl;

   
    return 0;
}