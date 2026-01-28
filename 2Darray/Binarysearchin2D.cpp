#include<bits/stdc++.h>
using namespace std;

 void print2D(int arr[][4],int row){
    for(int i=0;i<row;i++){
      for(int j= 0;j<4;j++){
        cout<<arr[i] [j]<<" \t";
      }
      cout << endl;
    }
 }

 bool binarySearchOnMatrix(int arr[][4],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i][0]<=target&& target<=arr[i][n-1]){
            int start=0;
            int end= n-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                  if(arr[i][mid]==target){
                    return true;
                  }
                  else if(arr[i][mid]<target)
                  start=mid+1;
                  else
                  end=mid-1;
            }
        }
    }
        return false;
 }
   
int main(){
   
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4;
    int target=8;
    cout << "Original Matrix: " << endl;
    print2D(arr,n);
     cout << endl;
  if (binarySearchOnMatrix(arr, n, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

   return 0;
    

}




