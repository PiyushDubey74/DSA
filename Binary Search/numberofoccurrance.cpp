#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
int start=0,end=n-1,mid;
int first=-1,last=-1;
while(start<=end){
   
     mid=start+(end-start)/2;

     if(arr[mid]== key){
        first=mid;
        end=mid-1;
     }

     else if(arr[mid]<key){
        start=mid+1;
     }

     else
     end=mid-1;
    //Last position
   int start=0;end=n-1;
   while(start<=end){
     mid=start+(end-start)/2;

     if(arr[mid]==key){
        last=mid;
        start=mid+1;
     }
     else if(arr[mid]<key){
        start=mid+1;
     }

     else 
     end=mid-1;
   }
    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;
    return 0;

}





}


int main (){
  
     int arr[1000];
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int key;
  cout<<"Enter the value of key";
  cin>>key;


  cout<<BinarySearch(arr,n,key)<<endl;
 
 return 0;




}
