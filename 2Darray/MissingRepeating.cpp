#include <bits/stdc++.h>
using namespace std;

void printMatrix(int arr[][4], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << arr[i][j] << "\t";
        }
       cout << endl;
    }
}

void findMissingRepeating(int arr[][4], int n) {
    vector<int> flat_arr;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            flat_arr.push_back(arr[i][j]);
        }
    }

    int repeating = -1;
    int missing = -1;

    for (int i = 0; i < flat_arr.size(); ++i) {
        int index = abs(flat_arr[i]) - 1;
        if (flat_arr[index] > 0) {
            flat_arr[index] = -flat_arr[index];
        } else {
            repeating = abs(flat_arr[i]);
        }
    }

    for (int i = 0; i < flat_arr.size(); ++i) {
        if (flat_arr[i] > 0) {
            missing = i + 1;
            break;
        }
    }

    if (repeating != -1 && missing != -1) {
        cout << "\nRepeating number is: " << repeating << endl;
        cout << "Missing number is: " << missing << endl;
    } else {
      cout << "\nCould not find the missing or repeating number." << endl;
    }
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 6, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int n = 4;

    cout << "Original matrix is: " << endl;
    printMatrix(arr, n);

    findMissingRepeating(arr, n);

    return 0;
}