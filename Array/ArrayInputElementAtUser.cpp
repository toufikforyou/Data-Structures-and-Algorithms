#include<iostream>
using namespace std;

int main(){
    int length;
    cin >> length;
    int array[length];
    int newArray[length+1];

    cout << "Enter array element one by one" << endl;

    for(int index = 0; index < length; index++){
        cin >> array[index];
    }
    cout << "Enter element " << endl;
    int element;
    cin >> element;
    cout << "Enter position " << endl;
    int position;
    cin >> position;

    for(int index = length-1; index >= position; index--){
        newArray[index] = array[index];
    }
    newArray[position-1] = element;

    for(int index = position-2; index >= 0; index--){
        newArray[index] = array[index];
    }

    for(int index = length; index >= 0; index--){
        cout << newArray[index] << "";
    }

    return 0;
}