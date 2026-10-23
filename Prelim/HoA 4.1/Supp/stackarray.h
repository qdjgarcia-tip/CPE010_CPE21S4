#include <iostream>
#define maxSize 12
char stackArr[maxSize];
int top = -1;

bool isEmpty(){
    return (top == -1);
}

char Top(){ 
    if(isEmpty()){
    return '\0';
    }

    return stackArr[top];
}

void push(char newData) {
    if (top < maxSize - 1) {
        stackArr[++top] = newData;
    }
}

void pop(){
    if(isEmpty()) return;

   stackArr[top];
    top --;
}