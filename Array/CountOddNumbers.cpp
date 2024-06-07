// 6. Count Odd Numbers: Count the number of odd elements in an array.

#include<iostream>
using namespace std;

int main(){
    int length = 10;
    
    int array[length] = {1,2,3,4,5,6,7,8,9,10}, odd_count = 0, i;

    for(i = 0; i < length; i++){
        if(array[i] % 2 != 0){
            odd_count++;
        }
    }

    cout << "Count Even Numbers of array " << odd_count << " ";

    return 0;
}