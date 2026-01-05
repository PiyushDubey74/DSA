#include<bits/stdc++.h>
using namespace std;
   // print 4X4 matrix
   void printmatrix(int arr[][4],int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<"\t ";
        }
        cout<<endl;
    }
   }
   // rotate code by 90*
   void printmatrix90(int arr[][4],int n){
       for(int i=0;i<n;i++){
          for(int j=1;j<n;j++){
         swap(arr[i][j],arr[j][i]);
          }
       }
      // reverse each row
       for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
        cout<<endl;
       }
   }

int main (){

    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4;
    cout<<"The original matrix is"<<endl;
    printmatrix(arr,n);
    printmatrix90(arr,n);
    cout<<"Matrix after rotating by 90* "<<endl;
    printmatrix(arr,n);
   
    return 0;
}