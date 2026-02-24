#include<bits/stdc++.h>
using namespace std;

  void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;

    while(left<= mid && right<=end){
        if(arr[left] <=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }

    // left array is not empty yet
    while(left<=mid){
        temp[index]=arr[left];
            index++,left++;
        }
    // right array is not empty yet
      while(right<=end){
      temp[index]=arr[right];
      index++,right++;
      }

  }

   void mergesort(int arr[],int start,int end){
   

    if (start==end){
        return ;
    }

    int mid = start+(end-start)/2;


   // left side
   mergesort(arr,start,mid);
   // right side
   mergesort(arr,mid,end);

   merge(arr,start,mid,end);

   }

int main (){


    int arr[]={6,7,8,3,2,4,1,7,6,5};
    mergesort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

}

