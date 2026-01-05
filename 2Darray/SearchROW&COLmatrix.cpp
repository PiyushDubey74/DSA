#include<bits/stdc++.h>
using namespace std;

void printmatrix(int arr[][4], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl; 
    }
}

bool SearchOnMatrix(int arr[][4], int rows, int cols, int target) {
    
    int currentRow = 0;
    int currentCol = cols - 1;

    while (currentRow < rows && currentCol >= 0) {
        int currentElement = arr[currentRow][currentCol];

        if (currentElement == target) {
            return true; 
        }
        
        if (currentElement > target) {
            currentCol--; 
        } else {
            currentRow++; 
        }
    }

    return false; 
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int rows = 4;
    int cols = 4;
    int target = 14;

    cout << "Original matrix:" << endl;
    printmatrix(arr, rows);
    cout << endl;

    if (SearchOnMatrix(arr, rows, cols, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
