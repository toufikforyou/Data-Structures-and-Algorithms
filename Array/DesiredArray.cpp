#include<iostream>
using namespace std;

int main() {
    int al;
    cout<<"al=";
    cin >> al;
    
    int a[al];
    cout<<"enter array elements"<<endl;
    for(int i = 0; i < al; i++) {
        cin >> a[i];
    }
    
    int b[al];

    for(int i = 0; i < al; i++) {
        b[i] = a[al - i - 1]; 
    }
    
    cout<<"your desired array : "<<endl;
    for(int i = 0; i < al; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    
    return 0;
}