#include<iostream>
using namespace std;

/* psodo code for linear search

    write a function linearSearch with some arguments (arr, findElement as find, length as n)

    for(i < n){
        if(arr[i] == find)
            cout << find is found in i index
            break
    }

*/

void linearSearch(int arr[], int find, int n){
    int found = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == find){
            cout << find << " is found on " << i  << " index";
            found++;
            break;
        }
    }

    if(found == 0) 
        cout << find << " is not found!";
}

int main(){
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int find = 10;
    int length = sizeof(array) / sizeof(array[0]);

    // call linear Search
    linearSearch(array, find, length);

    return 0;
}