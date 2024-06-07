#include<iostream>
using namespace std;

// Deletion at the given after index of array
int main(){
    int array[5] = {11, 12, 13, 14, 15};
    int length = sizeof(array) / sizeof(array[0]);
    int newArray[length-1];
    int givenIndex = 3;
    int givenAfterIndex = givenIndex+1;

    for(int index = 0; index < givenAfterIndex; index++){
        newArray[index] = array[index];
    }

    for(int index = givenAfterIndex; index < length; index++){
        newArray[index] = array[index+1]; 
    }

    // cout newArray
    for(int index = 0; index < length-1; index++){
        cout << newArray[index] << " ";
    }

    return 0;
}