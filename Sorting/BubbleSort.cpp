#include <iostream>
using namespace std;

/* psodo code for Bubble Sort algorithm

    create a function bubbleSort with an arguments (arr, length as n)
    inner function initial i, j value = 0;
    for(i < n-1){
        for(j < n - i - 1){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1])
            }
        }
    }

*/

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[] = {5, 1, 4, 2, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    // call bubbleSort function
    bubbleSort(arr, length);

    // Console out in the sorted array
    displayArray(arr, length);

    // Output: 1 2 4 5 8 9

    return 0;
}