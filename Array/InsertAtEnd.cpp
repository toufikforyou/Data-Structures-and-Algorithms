#include<iostream>
using namespace std;

// for Insertation at the end
int main(){
    int array[5] = {11, 12, 13, 14, 15};
    int length = sizeof(array) / sizeof(array[0]);
    int newArray[length+1];
    int element = 55;

    // new array all element copy from array;
    for(int index = 0; index <length; index++){
        newArray[index] = array[index];
    }

    // insert value setup end of newArray
    newArray[length] = element;


    // now new array cout of all them
    for(int index = 0; index <= length; index++){
        cout << newArray[index] << " ";
    }

    return 0;
}