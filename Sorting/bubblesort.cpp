//  #include<bits/stdc++.h>
// using namespace std;

//    void bubble_sort(int arr[],int  n){
//     for(int i =i-1;i>=0;i--){
//         int didswap =0;
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp =arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//                 didswap =1;
//             }
//         }
//         if(didswap ==0){
//             break;
//         }
//         cout<<"runs";
//     }
// }   

//  int main (){
//  int n;
//  cout<<"Enter a vlaue";
//  cin>>n;
//  int arr[n];
//  for(int i=0;i<n;i++) cin>> arr[i];
//     bubble_sort(arr ,n);
//     for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//     }
 
 
//  return 0;
// }

#include<iostream>
using namespace std;
int main (){
  int arr[1000];
  int n;
  cout<<"Enter the size of array ";
  cin>>n;
  cout<<"Enter the element of array";
   for(int i =0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=n-2;i>=0;i--) 
   {
    bool swapped =0;
    for(int j=0;j<=i;j++){
        if(arr[j]>arr[j+1])
        {
            swapped=1;
            swap(arr[j],arr[j+1]);

        }
    }


    if(swapped==0)
    break;

   }
   
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";  
 }



}
