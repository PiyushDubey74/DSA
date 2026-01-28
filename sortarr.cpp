#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main( ) {
    int arr[] = {2, 4,4,5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size)) {
        cout << "Array is sorted in ascending order." << endl;
    } else {
        cout << "Array is not sorted in ascending order." << endl;
    }

    return 0;
}
