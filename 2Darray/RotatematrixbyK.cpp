#include<bits/stdc++.h>
using namespace std;


void printmatrix(int arr[][4], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}


void rotate90(int arr[][4], int n){
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

   
    for(int i=0; i<n; i++){
        int start = 0;
        int end = n - 1;
        while(start < end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}


void rotateKTimes(int arr[][4], int n, int k){

    int effective_k = k % 4;
    if (effective_k < 0) {
        effective_k += 4;
    }

    
    for (int i = 0; i < effective_k; i++){
        rotate90(arr, n);
    }
}

int main (){
    int arr[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int n = 4;
    int k = 3; 

    cout << "Original Matrix:" << endl;
    printmatrix(arr, n);

    rotateKTimes(arr, n, k);

    cout << "\nMatrix after rotating by " << k << " times:" << endl;
    printmatrix(arr, n);

    return 0;
}
