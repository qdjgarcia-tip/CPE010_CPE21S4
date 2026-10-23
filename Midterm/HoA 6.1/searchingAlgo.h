#include "node.h"

#ifndef SEARCHINGALGO_H
#define SEARCHINGALGO_H

template <typename T>
void linearsearchArr(int maxSize, T dataFind, T data[]){

    int i = 0; 
    while(i <= maxSize){
        if(dataFind == data[i]){
            std::cout<<"Searching is successful\n";
        return;
        }
    i++;
    }
    std::cout <<"The search is unsuccessful\n";
}

template <typename T>
void linearSearchLL(Node<T>* node, T dataFind){

    while(node != nullptr){
        if(node-> data == dataFind){
            std::cout<<"the search was a success.\n";
            return;
        }
        node = node->next;
    }
    std::cout<<"The search was unsuccessful.\n";
}

template<typename T>
void binarySearchArr(T dataFind, T data[], int maxSize){
    int low = 0, up = maxSize-1, middle;
    while(low <= up){
       middle = (int)((low+up)/2);
        if(dataFind == data[middle]){
            std::cout<<"searching is a success!\n";
            return;
        }
        else if(dataFind > data[middle]){
            low = middle + 1;
        }else{
            up = middle -1;
        }
    }
    std::cout<<"Search element was not found\n";
}

//CREATE A HELPER FUNCTION TO GET THE MIDDLE
template<typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>*last){
    // use two pointers
    // slow moves one node at a time
    // fast moves two at a time
    Node<T>* slow = start;
    Node<T>* fast = start;

    //create a loop until fast reaches the end or
    //reaches the last node of the current search range
    while(fast != last && fast->next != last){

        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

template<typename T>
void binarySearchLL(Node<T>* start, T dataFind){

    Node<T>* last = nullptr;

    while(start != last){
        //middle element
        Node<T>* middle = getMiddle(start, last);

        if(middle->data == dataFind){
            std::cout<<"the data was found.\n";
            return;
        }
        else if(middle->data > dataFind){
            last = middle;
        }
        else{
            start = middle->next;
        }
    }
std::cout<<"Search element was not found.\n";
}

#endif