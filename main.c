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
    int i;
    for (i = INSERTION_SORT; i <= QUICK_SORT; i++)
        executeSortOnRandomArray(i, size);
}

void worstCase(int size){
    
}

void executeSortOnRandomArray(sortType type, int size){
    int array[size];

    generateRandomArray(array, size);

    float timeInSeconds = sort(type, array, size);

    printf("Sort type %d - %f seconds.\n",type, timeInSeconds);
}