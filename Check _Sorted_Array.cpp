#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(isSorted(arr, n)) {
        cout << "Array is Sorted";
    }
    else {
        cout << "Array is Not Sorted";
    }

    return 0;
}