#include<iostream>
using namespace std;
int main (){

     int n;
     cout<<"Enter a number";
     cin>>n;

     for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // star
        for(int j=0;j<2*i+1;j++){  //2*i+1
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){ // formula-n-i-1
            cout<<" ";
        }
        cout<<endl;
     }
                //   *
                //   **
                //   ***
                //   ****
                //   ******


    return 0;
}