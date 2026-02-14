#include<iostream>
using namespace std;
int main (){

     int n;
     cout<<"Enter the size of array";
     cin>>n;

     int arr[n];
    // int*arr= new int[n];
     cout<<"Enter"<<n<<"integers"<<endl;
      for(int i =0;i<n;i++){
         cin>>arr[ i];
    }
     int temp = arr[0];
     for(int i=0;i<n;i++){
        arr[i-1] = arr[i];
     }
     arr[n-1] = temp;

   
   cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
