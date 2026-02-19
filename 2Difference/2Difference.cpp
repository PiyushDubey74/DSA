#include<bits/stdc++.h>
using namespace std;

bool findthedifference(vector<int>&arr,int target){
    int start = 0;
    int end =1;
     int n = arr.size( );
    while( end< n){
     int sum=arr[end]-arr[start];
     if(sum == target){
        return true;
     }
     else if (sum<target){
        end++;
     }
     else{
        start++;
     }
      if (start == end) {
            end++;
    }
}
    return false ;

}
int main ()
{
 vector<int> arr={2,3,5,10,50,80};
 int target = 41;
 if(findthedifference(arr,target)){
    cout<<"Pair with the difference is found"<<endl;
 }
 else{
 cout<<"Pair is not found";
 }
    return 0;

}






