#include<bits/stdc++.h>
using namespace std;

 void printmatrix(int arr[][4],int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<4;j++){
            cout<<arr[ i ][j]<<"\t";
        }
        cout<<endl;
    }
 }

int findValueInMatrix(int arr[][4],int n, int target){
      for(int i=0;i<n;i++){
       if(arr[i][0]<=target && arr[i][n-1]>=target){
        int start=0;
        int end=n-1;
        while (start<=end){
            int mid=start+(end-start)/2;
        if(arr[i][mid]==target){
            
            return arr[i][mid];
        }
        if(arr[i][mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      }
    }
  }

  return -1;
}

int main (){

 int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
 int n=4;
 int target=11;
 cout<<"Original matrix is";
 printmatrix(arr,n);

    int foundValue = findValueInMatrix(arr, n, target);
    if (foundValue != -1) {
        cout << "Answer is found: " << foundValue << endl;
    } else {
        cout << "Answer is not found." << endl;
    }
    return 0;

}
