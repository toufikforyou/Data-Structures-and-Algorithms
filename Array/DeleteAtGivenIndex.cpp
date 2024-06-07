#include<iostream>
using namespace std;

// Deletion at the given index of array
int main(){
    int array[5] = {11, 12, 13, 14, 15};
    int length = sizeof(array) / sizeof(array[0]);
    int newArray[length-1];
    int givenIndex = 3;

    for(int index = 0; index < givenIndex; index++){
        newArray[index] = array[index];
    }

    for(int index = givenIndex+1; index < length; index++){
        newArray[index-1] = array[index]; 
    }

    // cout newArray
    for(int index = 0; index < length-1; index++){
        cout << newArray[index] << " ";
    }

    return 0;
}