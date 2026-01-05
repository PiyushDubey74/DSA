#include<bits/stdc++.h>
using namespace std;

// Your existing printmatrix function
void printmatrix(int arr[][4], int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}


void rotate180(int arr[][4], int n){
    // Step 1: Reverse each row
    for(int i=0; i<n; i++){
        int start = 0;
        int end = n - 1;
        while(start < end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    // Step 2: Reverse the rows themselves
    for(int i=0; i < n / 2; i++){
        for(int j=0; j < n; j++){
            swap(arr[i][j], arr[n - 1 - i][j]);
        }
    }
}

int main (){
    // Using a 4x4 matrix for consistency
    int arr[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int n = 4;

    cout << "Original Matrix:" << endl;
    printmatrix(arr, n);

    rotate180(arr,n); 

    cout << "\nMatrix after rotating by 180 degrees:" << endl;
    printmatrix(arr, n);

    return 0;
}