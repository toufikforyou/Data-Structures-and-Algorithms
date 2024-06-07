// 4. Calculate the Average: Calculate the average of all elements in an array.

#include<iostream>
using namespace std;

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10}, length = 10, sum = 0, i;
    double avarage;

    for(i = 0; i < length; i++){
        sum += array[i];
    }

    avarage = float(sum) / length;

    cout << "AVARAGE ELEMTNTS OF ARRAY " << avarage << " ";

    return 0;
}