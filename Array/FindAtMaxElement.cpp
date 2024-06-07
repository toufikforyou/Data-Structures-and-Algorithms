// 1. Find the Maximum Element: Given an array, find the maximum element in it.

#include<iostream>
using namespace std;

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10}, max_element, i;

    // find max element
    max_element = array[0];

    for(i = 0; i< 10; i++){
        if(max_element < array[i]){
            max_element = array[i];
        }
    }

    cout << "MAX ELEMTNT OF ARRAY " << max_element << " ";

    return 0;
}