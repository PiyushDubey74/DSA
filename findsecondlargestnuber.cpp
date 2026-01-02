#include<iostream>
using namespace std;
int main (){
   
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
     int secondlargest =-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i]<largest && (secondlargest ==-1 || arr[i]>secondlargest)){
          secondlargest =arr[i];  
        }
    }
    
    // cout<<"The largest number is"<<largest<<endl;

   
   if(secondlargest ==-1){
    cout<<"There is no second largest number "<<endl;
   } else{
    cout<<"The second largest number is "<<secondlargest<<endl;
   }

    return 0;
}