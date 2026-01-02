#include<iostream>
using namespace std;
int main (){
 
     int n;
     cout<<"Enter the size of array";
     cin>>n;
    
     
    int arr[n];
    cout << "Enter the numbers (excluding the missing number): ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
     
     int hash[n+1] = {0};
     for(int i=0;i<n-1;i++){
      hash[arr[i]] =1;
     }
     
     for(int i=1;i<n;i++){
        if(hash[i]==0){
            cout<< i <<endl;
            break;
        }
     }

    

    return 0;
}