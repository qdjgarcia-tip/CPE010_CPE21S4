#include <iostream>
#include <chrono>
#include "searchingAlgo.h"

int main() {
    
    int n;
    std::cout << "Enter n" << std::endl;
    std::cin >> n;
/*
    std::cout << "Linear Search" << std::endl;
    //linear
    int* dataset = new int[n];
    for(int i = 0; i < n ; i++){
        dataset[i] = i * 2;
        std::cout << dataset[i] << " ";
    }
    std::cout<<std::endl;
    
    int choice;
    std::cout << "Indicate the number to search: ";
    std::cin >> choice;

    auto start= std::chrono::high_resolution_clock::now();

    linearsearchArr(n, choice, dataset);

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Time elapsed for Linear Search: " << duration << " microseconds\n";

    std::cout << "Binary Search" << std::endl;
*/
    // binary
    int* dataset2 = new int[n];
    for(int i = 0; i - n; i++){
        dataset2[i] = i * 2;
        std::cout << dataset2[i] << " ";
    }
    std::cout<<std::endl;

    int choice2;
    std::cout << "Indicate the number to search: ";
    std::cin >> choice2;

    auto start2= std::chrono::high_resolution_clock::now();

    binarySearchArr(choice2, dataset2, n);

    auto end2 = std::chrono::high_resolution_clock::now();
    
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count();
    std::cout << "Time elapsed for Binary Search: " << duration2 << " microseconds\n";


}