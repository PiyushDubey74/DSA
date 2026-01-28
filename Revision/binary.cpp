// #include <bits/stdc++.h>
// using namespace std;

// bool findbinary(vector<int>&arr,int target){
//   int n = arr.size();
//   int start=0,end=n-1;
  
//   while(start<=end){
//       int mid=start+(end-start);
//       if(arr[mid]==target){
//           break;
//       }
//      else if(arr[mid]<target)
//       start=mid+1;
//       else{
//           end=mid-1;
//       }
      
//       return 1;
//   }
// }
 
// int main() {
//  vector<int> arr={2,3,4,5,6,7,8,9};
//  int target=7; 
//  if(findbinary(arr,target)){
//     cout<<"target found"<<endl;
//  }
//  else{
//  cout<<"target is not found";
//  }
//     return 0;
// } 
//------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> findFirstAndLastPosition(vector<int>& arr, int target) {
//     int first = -1;
//     int last = -1;
//     int n = arr.size();

//     //   Search for the first occurrence
//     int start = 0, end = n - 1;
//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target) {
//             first = mid;     
//             end = mid - 1;   
//         } else if (arr[mid] < target) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     //    Search for the last occurrence
//     start = 0, end = n - 1; 
//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target) {
//             last = mid;      
//             start = mid + 1; 
//         } else if (arr[mid] < target) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     return {first, last};
// }

// int main() {
//  vector<int> arr = {5, 7, 7, 8, 8, 9};
//     int target = 8;

//     pair<int, int> positions = findFirstAndLastPosition(arr, target);

//     if (positions.first != -1) {
//        cout << "The first occurrence is at index: " << positions.first <<endl;
//        cout << "The last occurrence is at index: " << positions.second <<endl;
//     } else {
//        cout << "Element not found in the array." <<endl;
//     }

//     return 0;
// }
//-------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> Numberofoccurance( vector<int>& arr, int target) {
//     int first = -1, last = -1;
//     int n = arr.size();
//     int start = 0, end = n - 1, mid;

//     // First occurrence
//     while (start <= end) {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == target) {
//             first = mid;
//             end = mid - 1;
//         } else if (arr[mid] < target) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     // Last occurrence
//     start = 0; end = n - 1;
//     while (start <= end) {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == target) {
//             last = mid;
//             start = mid + 1;
//         } else if (arr[mid] < target) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     return {first, last};
// }

// int main() {
//     vector<int> arr = {2, 4, 4, 4, 4, 5, 6};
//     int target = 4;
//     pair<int, int> position = Numberofoccurance(arr, target);
//     if (position.first != -1) {
//         int occurrence = position.second - position.first + 1;
//         cout << "Number of occurrences = " << occurrence << endl;
//     } else {
//         cout << "Element not found in the array" << endl;
//     }
//     return 0;
// }
//-----------------------------------------------------------------------------------------
