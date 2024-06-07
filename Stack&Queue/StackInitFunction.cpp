#include<iostream>
using namespace std;

const int MAX_CAP = 100;
int stack[MAX_CAP];
int TOP_INDEX = -1;

void push(int element){
    if(TOP_INDEX == MAX_CAP-1){
        cout << "stack is full";
    }else{
        TOP_INDEX++;
        stack[TOP_INDEX] = element;

        cout << "push successfull";
    }
}

int pop(){
    if(TOP_INDEX < 0){
        cout << "stack is empty";
        return -1;
    }else{
        int element = stack[TOP_INDEX];
        TOP_INDEX--;
        return element;
    }
}

int peek(){
    if(TOP_INDEX < 0){
        cout << "stack is empty";
        return -1;
    }else{
        return stack[0];
    }
}

bool stackEmptyCheck(){
    if(TOP_INDEX < 0){
        return true;
    }else{
        return false;
    }
}

int sizeOfCurrentStack(){
    return TOP_INDEX+1;
}

bool stackIsFull(){
    if(TOP_INDEX == MAX_CAP -1){
        return true;
    }else{
        return false;
    }
}

void queuePush(int element){
    if(stackIsFull()){
        cout << "stack is full";
    }else {
        TOP_INDEX++;
        stack[TOP_INDEX] = element;

        cout << "push successfull";
    }
}

int queuePop(){
    if(stackEmptyCheck()){
        cout << "stack is empty";
        return -1;
    }else {
        int element = stack[0];
        // leftRotetArray();
        cout << "pop successfull";
        return element;
    }
}

int main(){
    
    return 0;
}