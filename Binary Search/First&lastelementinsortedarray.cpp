// #include <iostream>
// using namespace std;

// int BinarySearch(int arr[], int n, int key) {
   
//     int start = 0, end = n - 1, mid;
//     int first = -1, last = -1;

//     // Find first occurrence
//     while (start <= end) {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == key) {
//             first = mid;
//             end = mid - 1;  // move left to find earlier occurrence
//         }
//         else if (arr[mid] < key) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//     }


//     // Find last occurrence
//     int lastoccurrance(int arr[],int n,int key);
//     int start = 0, end = n - 1;
//     while (start <= end) {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == key) {
//             last = mid;
//             start = mid + 1;  // move right to find later occurrence
//         }
//         else if (arr[mid] < key) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//     }

//     cout << "First occurrence: " << first << endl;
//     cout << "Last occurrence: " << last << endl;
//     return 0;


//     int occurrance(int arr[],int n,int key){
//         int lastoccurrance(int arr[],int n,int key);
//         int BinarySearch(int arr[], int n, int key);
//         if(binary==-1,last==-1){
//             return 0;
//             return(last-binary+1);
//         }
//     }
// }

// int main() {
//     int arr[1000];
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;

//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter the value of key: ";
//     cin >> key;

//    cout<<BinarySearch(arr, n, key)<<endl;


//     return 0;
// }


#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1, result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            result = mid;
            end = mid - 1;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int lastOccurrence (int arr[], int n, int key) {
    int start = 0, end = n - 1, result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            result = mid;
            start = mid + 1;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int countOccurrence(int arr[], int n, int key) {
    int first = firstOccurrence(arr, n, key);
    if (first == -1) return 0; // key not found
    int last = lastOccurrence(arr, n, key);
    return last - first + 1;
}

int main() {
    int arr[1000], n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << " Enter the elements (sorted array): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the value of key: ";
    cin >> key;

    cout << "Count of " << key << ": " << countOccurrence(arr, n, key) << endl;

    return 0;
}


