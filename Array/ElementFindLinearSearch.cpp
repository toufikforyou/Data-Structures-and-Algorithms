#include<iostream>
using namespace std;

// find element of chapter linear search;
int main(){
    int array[5] = {11, 12, 13, 14, 15};
    int length = sizeof(array) / sizeof(array[0]);

    int findElement = 13;
    
    for(int index = 0; index < length; index++){
        if(array[index] == findElement){
            cout << findElement << " is found." <<endl;
            break;
        }
    }

    return 0;
}