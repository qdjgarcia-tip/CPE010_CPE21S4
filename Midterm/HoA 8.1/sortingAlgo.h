#ifndef SORTINGALGO_H
#define SORTINGALGO_H

template<typename T>
void shellSort(T arr[], int size){
    for (int gap = size / 2; gap > 0; gap /= 2){
        for (int i = gap; i < size; i++){
            int temp = arr[i];
            int j = i;

            while (j >= gap && arr[j - gap] > temp){
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;
        }
    }
}

template<typename T>
void merge(T arr[], int low, int middle, int high){
    int temp[100];
    int i = low, j = middle + 1, k = low;

    while(i <= middle && j <= high){
        if (arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= middle){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int x = low; x <= high; x++){
        arr[x] = temp[x];
    }
}

template<typename T>
void mergeSort(T arr[], int low, int high){
    if(low < high){
        int middle = (low + high) / 2;

        mergeSort(arr, low, middle);
        mergeSort(arr, middle + 1, high);

        merge(arr, low, middle, high);
    }
}

template <typename T>
void insertionSort(T arr[], int low, int high){
    for (int k = 1; k < high; k++){
        T temp = arr[k];
        int j = k - 1;
        for (; j >= 0 && temp <= arr[j]; j--){
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}

// from HoA 7.1 (modified parameters)

template<typename T>
void quickSort(T arr[], int low, int high){
    if (high - low < 10) { // switch to insertion sort if 10 elements or less
        insertionSort(arr, low, high);
        return;
    }
    if(low < high){
        int pivot = arr[high];
        int i = low - 1;

        for(int j = low; j < high; j++){
            if (arr[j] < pivot){
                i++;

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pivot_index = i + 1;

        quickSort(arr, low, pivot_index - 1);
        quickSort(arr, pivot_index + 1, high);
    }
}

#endif