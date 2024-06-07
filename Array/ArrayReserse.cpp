#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int revArr[10];
    int count = 0;

    for(int i= 0; i< 10; i++){
        cout << arr[i] << " ";
    }

    cout << endl << "Reverse of this array: ";

    for(int i = 9; i >= 0; i--){
        revArr[count] = arr[i];
        count++;
    }

    for(int i= 0; i< 10; i++){
        cout << revArr[i] << " ";
    }
    
    return 0;
}