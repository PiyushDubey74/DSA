#include<iostream>

using namespace std;
int main (){
 
    int n;
 cout<<"Enter the size of array";
  cin>>n;
 int arr[n];
  cout << "Enter " << n << " elements:\n";
  for(int i=0;i<n;i++){
     cin>>arr[i];
 
     int num = 3;
      int index =-1;
       for(int i=0;i<num;i++){
        if(arr[i]==num){
            index = i;
            break;
        }
       }
    
       if(index != -1) {
        cout << "Number found at index: " << index << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }
     
 
  }


    return 0;
}