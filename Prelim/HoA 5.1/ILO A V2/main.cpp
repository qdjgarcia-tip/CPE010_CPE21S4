#include <iostream>
#include <string>

#define maxSize 12
std::string queueArr[maxSize];
int front = -1;
int rear = -1;

bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }else{
        return false;
    }
}

void enqueue(std::string name){
    if (rear == maxSize-1){
        std::cout<<"Queue is full\n";
    }else{
        if(front == -1)
        front = 0;
        rear++;
        queueArr[rear] = name;
    }
}

void dequeue(){
    if(isEmpty()){
        std::cout<<"Queue is empty\n";
    }else if(front == rear){
        front = rear = -1;
    }else{
        front++;
    }
}

void showfront(){
    if(isEmpty()){
        std::cout<<"Queue is empty\n";
    }else{
        std::cout<<"Element at front is:"<<queueArr[front];
    }
}

void displayQueue(){
    if(isEmpty()){
        std::cout<<"Queue is empty\n";
    }else{
        for(int i=front; i<= rear; i++){
            std::cout<<queueArr[i]<<" ";
        }
    }
}

int main(){
    
    enqueue("Dennis");
    enqueue("James");

    displayQueue();
}