#include<iostream>
using namespace std;

// for insersation at after given index;
int main(){
    int array[5] = {11, 12, 13, 14, 15};
    int length = sizeof(array) / sizeof(array[0]);
    int newArray[length+1];
    int givenIndex = 2;
    int givenAfterIndex = givenIndex+1;
    int element = 55;

    for(int index = 0; index < givenAfterIndex; index++){
        newArray[index] = array[index];
    }

    // set givenAfterIndex
    newArray[givenAfterIndex] = element;

    for(int index = givenAfterIndex+1; index <= length; index++){
        newArray[index] = array[index-1];
    }


    // cout all of them
    for(int index = 0; index <= length; index++){
        cout << newArray[index] << " ";
    }

    return 0;
}