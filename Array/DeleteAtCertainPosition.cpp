#include<iostream>
using namespace std;

// Deletion at the certain position or middle element of array
int main(){
    int array[5] = {11, 12, 13, 14, 15};
    int length = sizeof(array) / sizeof(array[0]);
    int newArray[length-1];

    int certainPosition = 3; // or middle position like to you
    int certainPositionIndex = certainPosition -1;

    for(int index = 0; index < certainPositionIndex; index++){
        newArray[index] = array[index];
    }

    for(int index = certainPosition; index <length; index++){
        newArray[index-1] = array[index];
    }

    // cout newArray all of elements
    for(int index = 0; index < length-1; index++){
        cout << newArray[index] << " ";
    }

    return 0;
}