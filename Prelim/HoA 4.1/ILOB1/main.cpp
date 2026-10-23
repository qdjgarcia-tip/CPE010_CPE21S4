#include <iostream>

//global variables:
#define maxSize 10
int stackArr[maxSize];
int top = -1, newData;

//function prototypes:
// Top, Push, Pop, isEmpty, isFull

//observer operators
bool isEmpty();
bool isFull();
void Top();
void displayAll();

//transformer operators
void push();
void pop();


int main(){
    int choice;
    while(true){
        std::cout<<"=====================\n";
        std::cout<<" Stack operations: " << std::endl;
        std::cout<<" [1] push [2] pop [3] isEmpty [4] isFull [5] Top"<<std::endl;
        std::cin>>choice;
        std::cout<<"=====================\n";
        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: std::cout<<"is the stack empty?"<< isEmpty()<<std::endl;
            break;
            case 4: std::cout<<"is the stack full?"<< isFull()<<std::endl;
            break;
            case 5: Top();
            break;
            default: std::cout<<"Invalid choice"<<std::endl;
            break;
        }
    }
    return 0;
}

//function definition
bool isEmpty(){
    return (top == -1);
}

bool isFull(){
    return (top == maxSize);
}

void Top(){
    // error catching:
    if(isEmpty()) return;
    //prints the top element
    std::cout<<"The top element is: " << stackArr[top]<<std::endl;
}

void push(){
    //error catching:
    if(isFull()){
        std::cout<<"Stack Overflow"<<std::endl;
        return;
    }

    //ask the user what they want to insert:
    std::cout<<"What number do you want to push";
    std::cin >> newData;


    //storing to the stack:
    stackArr[++top] = newData;
}

void pop(){
    // check if empty
    if(isEmpty()) return;

    // display the item to be popped:
    std::cout<<"Popping: "<< stackArr[top] << std::endl;
    // we remove the element from the stack
    top --;
}

void displayAll(){
    

}