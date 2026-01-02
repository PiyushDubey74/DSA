#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n (total numbers including the missing one): ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " elements:\n";
    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
    }

    int xor_full = 0;
    for (int i = 1; i <= n; ++i) {
        xor_full ^= i;
    }

    int xor_arr = 0;
    for (int i = 0; i < n - 1; ++i) {
        xor_arr ^= arr[i];
    }

    int missing_number = xor_full ^ xor_arr;
    cout << "The missing number is: " << missing_number << endl;

    return 0;
}
