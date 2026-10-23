#ifndef SUPP_GARCIA_H
#define SUPP_GARCIA_H
#include <iostream>

template <typename T>
void selectionSort(T arr[], int maxSize){
    for (int i = 0; i < maxSize; i++){
        int POS = i; // current element
        for (int j = i + 1; j < maxSize; j++){
            
            if (arr[j] < arr[POS]){                                   
                POS = j; // if element in j is smaller than current element then assign pos to j
            }
        }
        std::swap(arr[i], arr[POS]); // swap number and position
    }
}


// similar to the procedure algorithm pero combined into one function

/*

   for(int j= K+1; j < maxSize; j++){
        if(arr[j] < smallestElem){
            smallestElem = arr[j];
            position = j;
        }
    }

    int POS;
    for(int i = 0; i < maxSize; i++){
        POS = routineSmallest(arr, i, maxSize);
        std::swap(arr[i], arr[POS]);
    }
}

*/

#endif
