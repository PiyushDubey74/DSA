// #include<bits/stdc++.h>
// using namespace std;


// void printcal(int arr[][4],int row,int col){
//     for(int row=0;row<3;row++){
//         for(int col=0;col<4;col++){
//             cout<<arr[row][col];
//         }
//         cout<<endl;
//     }
// }
// int main (){

//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//    printcal(arr,3,4);
//   return 0;
// }
//-----------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

void printmatrix(int arr[][4],int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

 void printreverse(int arr[][4],int row,int col ){
      for(int i=0;i<row;i++){
        int start=0;
        int end=col-1;

        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
            
        }
      }
 }
int main (){

    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Original Matrix"<<" "<<endl;
    printmatrix(arr,4);
    printreverse(arr,3,4);
    cout<<"Matrix  after reversing the row"<<"  "<<endl;
    printmatrix(arr,3);

    return 0;
}
