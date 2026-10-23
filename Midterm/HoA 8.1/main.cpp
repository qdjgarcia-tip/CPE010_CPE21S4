#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sortingAlgo.h"

const int max_size = 25;

void displayArr(int arr[]);

int main(){

    int unsortedArr[max_size];
    srand(time(0));
    for(int i = 0; i < max_size; i++){
        unsortedArr[i] = std::rand() % 25;
    }

    std::cout << "Unsorted Array:" << std::endl;
    displayArr(unsortedArr);

    std::cout << std::endl;

    std::cout << "Shell Sort:" << std::endl;
    shellSort(unsortedArr, max_size);
    displayArr(unsortedArr);

    std::cout << std::endl;

    std::cout << "Merge Sort:" << std::endl;
    mergeSort(unsortedArr, 0, max_size - 1);
    displayArr(unsortedArr);

    std::cout << std::endl;

    std::cout << "Quick Sort:" << std::endl;
    quickSort(unsortedArr, 0, max_size - 1);
    displayArr(unsortedArr);

    return 0;
}

void displayArr(int arr[]){
    for (int i = 0; i < max_size; i++){
        std::cout << arr[i] << " ";
        }
    }