#include<iostream>
using namespace std;

int linear(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = linear(arr, n, x);
    
    if (r != -1) {
        cout << "Element found at index " << r << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}
