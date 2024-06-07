#include <iostream>
using namespace std;

/* psodo code for Insertion Sort algorithm

    write a function insertionSort with an argument (arr, length as n)

    void insertionSort(arr, n){
        int i, j, key;

        for(i = 1; i < n; i++){
            key = arr[i]
            j = i-1;

            while(j >= 0 && arr[j] > key){
                arr[j+1] = arr[j]
                j = j - 1
            }
            arr[j+1] = key
        }
    }

*/

void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
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

    // call insertionSort function
    insertionSort(arr, length);

    // Console out in the sorted array
    displayArray(arr, length);

    // Output: 1 2 4 5 8 9

    return 0;
}