#include<iostream>
using namespace std;

// For insertation at the begining
int main(){
    int array[5] = {11, 12, 13, 14, 15};

    int length = sizeof(array) / sizeof(array[0]);

    int newArray[length+1];

    int element = 55;


    for(int index = 0; index < length; index++){
        newArray[index+1] = array[index];
    }

    newArray[0] = element;

    // now cout all element of new array
    for(int index = 0; index <= length; index++){
        cout << newArray[index] << " ";
    }

    return 0;
}