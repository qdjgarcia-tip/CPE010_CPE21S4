#ifndef PRINTERARR_H
#define PRINTERARR_H
#include <iostream>
#include <string>

class Job{
public:
    int ID;
    int pages;
    std::string username;
};

class Printer{
private:
    // dynamic array using pointers
    Job *queue_array;
    size_t queue_capacity;
    size_t queue_size;
    int queue_front;
    int queue_back;

public:
    // constructor
    Printer(size_t capacity = 10);

    // functions 
    bool isEmpty();
    void Clear();
    bool isFull();

    void addJob(Job value);
    Job removeJob();
    void displayJob();
    void processJob();

    // destructor
    ~Printer(); 
};

//  constructor declaration based on the printer class
Printer::Printer(size_t capacity){
    queue_capacity = capacity;
    queue_size = 0;
    queue_front = 0;
    queue_back = -1;
    queue_array = new Job[queue_capacity]; /* new operator to allocate memory dynamically
                                              Job is at index 0 for queue_capacity
                                           */
}

bool Printer::isFull(){ 
    return queue_size == queue_capacity;
}

bool Printer::isEmpty(){
    return queue_size == 0;
}

void Printer::Clear(){
    queue_size = 0;
    queue_front = 0;
    queue_back = -1;
}

void Printer::addJob(Job value){

    if (isFull())
    {
        std::cout << "Printer queue is full.\n"<< std::endl;
        return;
    }

    // modulo arithmetic computation, array becomes circular
    queue_back = (queue_back + 1) % queue_capacity;

    /* updates Job value based on the queue_back result 
        with the modulo arithmetic computation
    */

    queue_array[queue_back] = value;

    queue_size++; // post-increment queue size (variable first then add 1)

    std::cout << "Job in queue.\n"<< std::endl;
}

Job Printer::removeJob(){

     // if statement checking queue_capacity whether its empty
    if (isEmpty()){
        std::cout << "No Job to print\n" << std::endl;
        return Job();
    }

    Job tail = queue_array[queue_front]; // tail to temporary store front queue
    // modulo operation for circular array
    queue_front = (queue_front + 1) % queue_capacity;

    queue_size--; //post-decrement the queue size (variable first then subtract by 1)

    // reset array index when job is empty
    if (isEmpty()){
        Clear();
    }
    return tail;
}

void Printer::displayJob(){
    if (isEmpty()){
        std::cout << "No job in queue.\n" << std::endl;
        return;
    }
    
    int size = queue_front;

    // for loop to display jobs until it reaches end of queue size
    for (size_t i = 0; i < queue_size; i++){
        std::cout << "ID: " << queue_array[size].ID  << std::endl;
        std::cout << "Username: " << queue_array[size].username << std::endl;
        std::cout << "Pages: " << queue_array[size].pages << std::endl;
        std::cout << std::endl;
        size = (size + 1) % queue_capacity; /* moves forward one index toward queue_back
                                               modulo operator so that it wont go past
                                               the end of the array, circular array
                                            */
    }
}
// destructor
Printer::~Printer(){
    delete[] queue_array;
}

void Printer::processJob(){
    if (isEmpty()){
        std::cout << "No Job in queue.\n"<< std::endl;
        return;
    }
    
    while (!isEmpty()){
        // reduces queue size per process
        Job tail = removeJob(); 
        std::cout << "ID: " << tail.ID  << std::endl;
        std::cout << "Username: " << tail.username << std::endl;
        std::cout << "Pages: " << tail.pages << std::endl;
        std::cout << std::endl;
    }
    std::cout << "All print jobs printed.\n"<< std::endl;
}
#endif