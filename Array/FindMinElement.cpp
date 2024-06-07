// 2. Find the Minimum Element: Find the minimum element in an array.

#include<iostream>
using namespace std;

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10}, min_element, i;

    // find minimum element
    min_element = array[0];

    for(i = 0; i< 10; i++){
        if(min_element > array[i]){
            min_element = array[i];
        }
    }

    cout << "MINIMUM ELEMTNT OF ARRAY " << min_element << " ";

    return 0;
}