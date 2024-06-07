#include <iostream>
using namespace std;

/* psodo code for marge sort algorithm

    void merge(arr, left, mid, right){
        init two part of array n1, n2

        int L[n1], R[n2];

        copy two part of array using L, R array;

        int i = 0, j = 0, k = left

        while(i < n1 && j < n2){
            if(L[i] <= R[j])
                arr[k++] = L[i++]
            else
                arr[k++] = R[i++]
        }

        while (i < n1)
            arr[k++] = L[i++];
        while (j < n2)
            arr[k++] = R[j++];
    }

    void margeSort(arr, left, right){
        if(left < right){
            middle = left + (right - left) / 2
        
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);

            merge(arr, left, mid, right);
        }
    }

*/

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, length);

    mergeSort(arr, 0, length - 1);

    cout << "\nSorted array is \n";
    printArray(arr, length);

    return 0;
}