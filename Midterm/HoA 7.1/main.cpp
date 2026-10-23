#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sorting.h"

const int maxSize = 100;

void display(int arr[]);

int main(){

int unsortedArr[maxSize];
srand(time(0));
for(int i = 0; i <maxSize ; i++){
    unsortedArr[i]=rand()%100;
    }

display(unsortedArr);

std::cout<<"Bubble Sort" << std::endl;
selectionSort(unsortedArr, maxSize);
display(unsortedArr);


std::cout<<"Selection Sort" << std::endl;
selectionSort(unsortedArr, maxSize);
display(unsortedArr);


std::cout<<"Insertion Sort" << std::endl;
insertionSort(unsortedArr, maxSize);
display(unsortedArr);

/*
std::cout<<"Insertion Sort 2" << std::endl;
insertionSort2(unsortedArr, maxSize);
display(unsortedArr);
*/


}

void display(int arr[]){
   for(int i = 0; i < maxSize; i++){
    std::cout << arr[i] << " ";
    }
    std::cout<<"\n";
}
