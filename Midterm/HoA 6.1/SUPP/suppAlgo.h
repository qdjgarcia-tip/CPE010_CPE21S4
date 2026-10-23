#include "suppNode.h"

#ifndef SUPPALGO_H
#define SUPPALGO_H

template <typename T>
void linearsearchArr(int maxSize, T dataFind, T data[]){
    int count = 0;
    int i = 0; 
    while(i < maxSize){
        if(dataFind == data[i]){
            count++;
        }
    i++;
    }
    
    if(count > 0){
        std::cout<<"Searching is successful\n";
        std::cout <<"Count: "<< count;
    }else{
        std::cout <<"The search is unsuccessful\n";
    return;
    }
}

template <typename T>
void linearSearchLL(Node<T>* node, T dataFind){
    int count = 0;

    while(node != nullptr){
        if(node-> data == dataFind){
            count++;
        }
        node = node->next;
    }

    if(count > 0){
        std::cout<<"Searching is successful\n";
        std::cout <<"Count: "<< count << "\n";
    }else{
        std::cout <<"The search is unsuccessful\n";
        std::cout << "Count: 0\n";
    return;
    }
}

template<typename T>
void binarySearchArr(T dataFind, T data[], int maxSize){
    int low = 0, up = maxSize-1, middle;
    
    if(low > up){
        std::cout<<"Search element was not found\n";
        return;
    }

    middle = (int)((low+up)/2);

    if(dataFind == data[middle]){
        std::cout<<"searching is a success!\n";
        return;
    }else if(dataFind > data[middle]){
        binarySearchArr(dataFind, data + middle + 1, maxSize - middle - 1);
    }
    else {
        binarySearchArr(dataFind, data, middle);
    }
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