#include<iostream>
using namespace std;

// for Insertation at the middle or certain position
int main(){
    int array[5] = {11, 12, 13, 14, 15};
    
    int length = sizeof(array) / sizeof(array[0]);

    int centerOfArray = 3;
    int middlePosition = centerOfArray;
    int middleIndex = middlePosition-1;
    int element = 55;

    int newArray[length+1];

    for(int index = 0; index < middlePosition; index++){
        newArray[index] = array[index];
    }
    
    // insert middle postion value
    newArray[middleIndex] = element;

    for(int index = middlePosition; index <= length; index++){
        newArray[index] = array[index-1];
    }

    // cout new array
    for(int index = 0; index <= length; index++){
        cout << newArray[index] << " ";
    }

    return 0;
}