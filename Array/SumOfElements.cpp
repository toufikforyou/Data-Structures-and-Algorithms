// 3. Calculate the Sum: Calculate the sum of all elements in an array.

#include<iostream>
using namespace std;

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10}, sum, i;

    // sum of all element
    sum = 0;

    for(i = 0; i< 10; i++){
        sum+=array[i];
    }

    cout << "SUM ELEMTNTS OF ARRAY " << sum << " ";

    return 0;
}