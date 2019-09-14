#include <stdio.h>
#include <time.h>
#include "sort\headers\insertionSort.h"
#include "sort\headers\selectionSort.h"
#include "utils\headers\arrayGen.h"

void sort(char * sortMethodName, int array[], int size);
void executeSortOnRandomArray(char * sortMethodName, int size);
void bestCase(int size);
void mediumCase(int size);
void worstCase(int size);

int main () {

    int size = 5;

    bestCase(size);

    mediumCase(size);

    worstCase(size);

    return 0;
}

void bestCase(int size){
    
}

void mediumCase(int size){
    executeSortOnRandomArray("INSERTION SORT", size);
    executeSortOnRandomArray("SELECTION SORT", size);
}

void worstCase(int size){
    
}

void executeSortOnRandomArray(char * sortMethodName, int size){
    int array[size];

    generateRandomArray(array, size);

    sort(sortMethodName, array, size);

    printf("\n");
}

void sort(char * sortMethodName, int array[], int size){
    
    clock_t start = clock();

    printf("%s\n\n", sortMethodName);
    printf("Unordered input array :\n\n");
    print(array, size);
    
    if(strcmp(sortMethodName, "INSERTION SORT") == 0)
        insertionSort(array, size);
    else 
        selectionSort(array, size);
    
    printf("\nOrdered output array :\n\n");
    print(array, size);

    clock_t end = clock();
    float seconds = (float)(end - start) / CLOCKS_PER_SEC;
    printf("Array was sorted in %f seconds.\n", seconds);
}