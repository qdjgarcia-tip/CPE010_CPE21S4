#include <iostream>
#include <cstdlib> // rand function
#include <ctime> // time for seeding, time function
#include "supp_garcia.h"

const int max_size = 100;

void displayArr(int arr[]);
void votesArr(int arr[], int votes[]);

int main(){
    int unsortedArr[max_size];
    int candidate[5] = {1,2,3,4,5};

    // for seeding, helps generate random votes per run
    srand(time(0));

    // generate a random votes with the range of 1-5
    for (int i = 0; i < max_size; i++){
        unsortedArr[i] = rand() % 5 + 1;
    }

    std::cout << "Unsorted Array:" << std::endl;
    displayArr(unsortedArr);

    std::cout << "Sorted Array:" << std::endl;
    selectionSort(unsortedArr, max_size);
    displayArr(unsortedArr);

    int votes[5] = {};
    votesArr(unsortedArr, votes); //stores the votes in an array then counts them

    std::cout << std::endl;

    std::cout << "Voting Results:" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cout << candidate[i] << ": " << votes[i] << " votes\n";
    }

    int winner = 0;
    for (int i = 1; i < 5; i++){
        if (votes[i] > votes[winner]){
            winner = i;
        }
    }
    std::cout << std::endl;
    std::cout << "Winning Candidate: " << candidate[winner] << " -> " << votes[winner] << " votes" << std::endl;
    return 0;
}

void displayArr(int arr[]){
    for (int i = 0; i < max_size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void votesArr(int arr[], int votes[]){
    for (int i = 0; i < 5; i++){
        votes[i] = 0; // start with zero value
    }
    for (int i = 0; i < max_size; i++){
        votes[arr[i] - 1]++; // increment count per candidate
    }
}