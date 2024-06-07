#include<iostream>
using namespace std;

// Deletion at the begining of array
int main(){
    int array[5] = {11, 12, 13, 14, 15};
    int length = sizeof(array) / sizeof(array[0]);
    int newArray[length-1];

    for(int index = 0; index < length; index++){
        newArray[index] = array[index+1];
    }

    // cout newArray of all elements
    for(int index = 0; index < length-1; index++){
        cout << newArray[index] << " ";
    }

    
    return 0;
}