#include <iostream>
using namespace std;

int main() {

    int arr[] = {12, 34, 67, 90};
    int n = 4; // Number of books
    int M = 2; // Number of students (assumed from the problem context)

    
    int start = 90;
    int end = 203;
    int mid;
    int ans = -1;

    while (start <= end) {
       
        mid = start + (end - start) / 2;

        long long page = 0;
        int count = 1;

        for (int i = 0; i < n; i++) {
     
            if (arr[i] > mid) {
                count = M + 1;
                break;
            }
          
            if (page + arr[i] > mid) {
                count++;
                page = arr[i];
            } else {
                page += arr[i];
            }
        }

     
        if (count <= M) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1; 
        }
    }


    cout << "Result from your corrected code: " << ans << endl;

    return 0;
}

