#include <iostream>
#include "SuppAlgo.h"

const int max_size = 10;

int main(){

    // PROBLEM 1
    /*

    int keys_array[max_size] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    for(int i = 0; i <max_size ; i++){
        keys_array[i];
        std::cout << keys_array[i] << " ";
    }
    std::cout<<std::endl;
    

    int choice;
    std::cout << "Indicate the number to search in the array: ";
    std::cin >> choice;

    linearsearchArr(max_size, choice, keys_array);

    std::cout<<"\n Linked List \n";

    Node<int>* keys_node1 = new_node(15);
    Node<int>* keys_node2 = new_node(18);
    Node<int>* keys_node3 = new_node(2);
    Node<int>* keys_node4 = new_node(19);
    Node<int>* keys_node5 = new_node(18);
    Node<int>* keys_node6 = new_node(0);
    Node<int>* keys_node7 = new_node(8);
    Node<int>* keys_node8 = new_node(14);
    Node<int>* keys_node9 = new_node(19);
    Node<int>* keys_node10 = new_node(14);

    keys_node1->next = keys_node2;
    keys_node2->next = keys_node3;
    keys_node3->next = keys_node4;
    keys_node4->next = keys_node5;
    keys_node5->next = keys_node6;
    keys_node6->next = keys_node7;
    keys_node7->next = keys_node8;
    keys_node8->next = keys_node9;
    keys_node9->next = keys_node10;

    linearSearchLL(keys_node1, 18);
    linearSearchLL(keys_node1, 20);

    */
    // PROBLEM 2

    int keys2_array[max_size] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    for(int i = 0; i <max_size ; i++){
        keys2_array[i];
        std::cout << keys2_array[i] << " ";
    }
    std::cout<<std::endl;

    int choice;
    std::cout << "Indicate the number to search in the array: ";
    std::cin >> choice;

    binarySearchArr(choice, keys2_array, max_size);

    return 0;

}