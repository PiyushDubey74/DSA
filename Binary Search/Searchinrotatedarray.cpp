#include<iostream>
using namespace std;

int searchInRotatedArray(int arr[], int n, int target) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; 
        if (arr[mid] == target)
            return mid;
        
        if (arr[start] <= arr[mid]) {
            if (target > = arr[start] && target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        else {
            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout << "Enter target: ";
    cin >> target;

    int ans = searchInRotatedArray(arr, n, target);
    cout << "Index: " << ans << endl;

    return 0;
}

