#include <bits/stdc++.h>
using namespace std;

 bool findpairwithsum(vector<int>&arr,int target){
    int start =0;
    int end=arr.size()-1;

    while(start<end){
        int sum = arr[start]+ arr[end];
        if(sum== target){
            return true;
        }
        else if (sum<target)
        start++;
        
        else{
            end--;
        }
         
    }
    return false ;

 } 


int main (){

  vector <int>  arr={1,2,3,4,6,18,25};
  int target =10;
  if(findpairwithsum(arr,target)){
    cout<<"Pair found"<<endl;
  }
  else{
    cout<<"Pair is not  found"<<endl;
  }

    return 0;

}


