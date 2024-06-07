#include <iostream>
using namespace std;

/* psodo code for Selection Sort algorithm

    write a function selectionSort with an argument (arr, length as n)

    void selectionSort(arr, n){
        for (int i = 0; i < n-1; i++) {
            int min_index = i;
            for(int j = i + 1; j < n; j++){
                if(arr[min_index] > arr[j]){
                    min_index = j;
                }
            }
            swap(arr[i], arr[min_index]);
        }
    }

*/

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
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

    // call selectionSort function
    selectionSort(arr, length);

    // Console out in the sorted array
    displayArray(arr, length);

    // Output: 1 2 4 5 8 9

    return 0;
}