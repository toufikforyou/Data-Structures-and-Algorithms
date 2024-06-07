// 11. Merge Arrays: Merge two arrays into one.

#include<iostream>
using namespace std;

int main(){
    int array1[5] = {1,2,3,4,5}, array2[5] = {6,7,8,9,10};

    int length = 10, i;

    int array[length];

    for(i = 0; i < length; i++){
        array[i] = i < 5 ? array1[i] : array2[i-5];
    }

    for(i = 0; i < length; i++){
        cout << array[i] << " ";
    }

    return 0;
}