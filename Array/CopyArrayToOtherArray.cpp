// 10. Copy an Array: Create a copy of an array.

#include<iostream>
using namespace std;

int main(){
    int length = 10, i;

    int array[length] = {1,2,3,4,5,6,7,8,9,10}, copyArray[length];

    for(i = 0; i < length; i++){
        copyArray[i] = array[i];
    }

    for(i = 0; i < length; i++){
        cout << copyArray[i] << " ";
    }

    return 0;
}