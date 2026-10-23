#include <iostream>
#include <cstdlib> //for generating random integers
#include <time.h> //will be used for our seeding function
#include "searchingAlgo.h"

const int max_size = 50;

int main() {
    
    /*
    //LINEAR SEARCH ARRAY

    //generate random values:
    int dataset[max_size];
    srand(time(0));
    for(int i = 0; i <max_size ; i++){
        dataset[i]=rand();
        std::cout << dataset[i] << " ";
    }
    std::cout<<std::endl;
    

    int choice;
    std::cout << "Indicate the number to search: ";
    std::cin >> choice;

    linearsearchArr(max_size, choice, dataset);
    */


    /*
    //LINEAR SEARCH LINKED LIST

    Node<char>* name1 = new_node('D');
    Node<char>* name2 = new_node('E');
    Node<char>* name3 = new_node('N');
    Node<char>* name4 = new_node('N');
    Node<char>* name5 = new_node('I');
    Node<char>* name6 = new_node('S');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = name5;
    name5->next = name6;

    linearSearchLL(name1, 'D');
    linearSearchLL(name1, 'X');
    */


    
    /*
    //BINARY SEARCH ARRAY

    //generate a sorted list for the array:
    int dataset2[max_size];
    for(int i = 0; i - max_size; i++){
        dataset2[i] = i;
        std::cout << dataset2[i] << " ";
    }
    std::cout<<std::endl;

    binarySearchArr(11, dataset2, max_size);
    */


    
    
    //BINARY SEARCH LINKED LIST

    Node<char>* name1 = new_node('A');
    Node<char>* name2 = new_node('B');
    Node<char>* name3 = new_node('C');
    Node<char>* name4 = new_node('D');
    Node<char>* name5 = new_node('E');
    Node<char>* name6 = new_node('F');
    Node<char>* name7 = new_node('G');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = name5;
    name5->next = name6;
    name6->next = name7;

    binarySearchLL(name1, 'G');
    binarySearchLL(name1, 'X');

    
}