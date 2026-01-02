#include<iostream>
using namespace std;
int main (){

    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      int val =0;
    for(int i=0;i<n;++i){
         bool isDuplicate = false;
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j]){
               
             isDuplicate = true;
                 break;
                

           if(isDuplicate) {
                 continue;
              }

                   int count = 0;
                for(int k=j;k<n-1;++k){
                    arr[k]=arr[k+1];
                    val =arr[i]+arr[j];
                }
                --n;
            } else{
                ++j;
            }
        }
    }
  cout<<"Array after removing duplicates\n";
  for(int i=0;i<n;++i){
    cout<<arr[i]<<" ";

  }
 
  cout<<endl;



    return 0;
}