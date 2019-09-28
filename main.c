#include <stdio.h>
#include "sort\headers\sort.h"
#include "utils\headers\arrayGen.h"
#include "utils\headers\arrayPrinter.h"

void executeSortOnRandomArray(sortType type, int size);
void bestCase(int size);
void randomCase(int size);
void worstCase(int size);

int main () {

    int size = 10;

    // bestCase(size);

    randomCase(size);

    // worstCase(size);

    return 0;
}

void bestCase(int size){
    
}

void randomCase(int size){
    executeSortOnRandomArray(INSERTION_SORT, size);
    executeSortOnRandomArray(SELECTION_SORT, size);
    executeSortOnRandomArray(MERGE_SORT, size);
}

void worstCase(int size){
    
}

void executeSortOnRandomArray(sortType type, int size){
    int array[size];

    generateRandomArray(array, size);

    printf("Given array :\n\n");
    print(array, size);

    float timeInSeconds = sort(type, array, size);

    printf("\nSorted array :\n\n");
    print(array, size);

    printf("Array was sorted in %f seconds.\n", timeInSeconds);

    printf("\n");
}