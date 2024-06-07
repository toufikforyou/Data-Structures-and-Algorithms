// 5. Count Even Numbers: Count the number of even elements in an array.

#include<iostream>
using namespace std;

int main(){
    int length = 10;
    
    int array[length] = {1,2,3,4,5,6,7,8,9,10,12}, event_count = 0, i;

    for(i = 0; i < length; i++){
        if(array[i] % 2 == 0){
            event_count++;
        }
    }

    cout << "Count Even Numbers of array " << event_count << " ";

    return 0;
}