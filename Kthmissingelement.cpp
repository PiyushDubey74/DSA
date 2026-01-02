#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(std::vector<int>& arr, int k) {
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    
  
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int missing_count = arr[mid] - (mid + 1);
        
        if (missing_count >= k) {
            
            end = mid - 1;
        } else {
            
            start = mid + 1;
        }
    }
    

    return k + start;
}

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    int result = findKthPositive(arr, k);
    cout << "The " << k << "th missing positive integer is: " << result;
    return 0;
}
