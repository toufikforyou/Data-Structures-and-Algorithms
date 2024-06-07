#include<iostream>
using namespace std;

// for insersation at before given index;

int main(){
    int array[5] = {11, 12, 13, 14, 15};
    int length = sizeof(array) / sizeof(array[0]);
    int newArray[length+1];
    int givenIndex = 4;
    int givenBeforeIndex = givenIndex - 1;
    int element = 55;

    for(int index = 0; index < givenBeforeIndex; index++){
        newArray[index] = array[index];
    }

    // set element of new array before of given index
    newArray[givenBeforeIndex] = element;

    for(int index = givenIndex; index <= length; index++){
        newArray[index] = array[index-1];
    }

    // cout for newArray all of elements
    for(int index = 0; index <= length; index++){
        cout << newArray[index] << " ";
    }

    return 0;
}
