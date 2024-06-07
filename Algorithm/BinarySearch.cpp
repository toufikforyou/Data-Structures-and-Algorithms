#include<iostream>
using namespace std;

/* psodo code for this function
    create a function binarySearch with argument (arr, findElement, lowIndex, highIndex)

    while(lowIndex <= highIndex){
        middleIndex;

        if(arr[middleIndex] == findElement){
            print finded element;
            retutn;
        }else if(arr[middleIndex] < find){
            lowIndex = middleIndex +1
        }else{
            highIndex = middleIndex -1
        }
    }

    otherwase element not found on the array.

*/

void binarySearch(int arr[], int find, int low, int high) {
    while (low <= high) {
        int midddle = low + (high - low) / 2;

        if (arr[midddle] == find){
            cout << find << " is found on " << midddle << " index";
            return;
        }else if (arr[midddle] < find){
            low = midddle + 1;
        } else{
            high = midddle - 1;
        }
    }
    cout << find << "Items not found!";
}

int main() {

    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int find = 4;
    int length = sizeof(array) / sizeof(array[0]);
    
    // call binary Search
    binarySearch(array, find, 0, length - 1);

    return 0;
}