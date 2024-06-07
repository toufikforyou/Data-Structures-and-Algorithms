// 8. Find a Specific Element: Check if a specific element exists in an array.

#include<iostream>
using namespace std;

int main(){
    int length = 10, i, element = 12;
    bool isExist = false;
    
    int array[length] = {1,2,3,4,5,6,7,8,9,10};

    for(i = 0; i < length; i++){
        if(array[i] == element){
            isExist = true;
        }
    }

    cout << "Find a Specific Element of array " <<" Exist = " <<isExist << " ";

    return 0;
}