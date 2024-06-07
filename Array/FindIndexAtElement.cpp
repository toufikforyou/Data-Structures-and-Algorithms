// 7. Find Index of Element: Given an element, find its index in the array.

#include<iostream>
using namespace std;

int main(){
    int length = 10, i, element = 5, index;
    
    int array[length] = {1,2,3,4,5,6,7,8,9,10};

    for(i = 0; i < length; i++){
        if(array[i] == element){
            index = i;
        }
    }

    cout << "Find Index of Element of array " << index << " ";

    return 0;
}