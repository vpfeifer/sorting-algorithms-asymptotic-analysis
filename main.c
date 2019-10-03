#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort\headers\sort.h"
#include "utils\headers\arrayGen.h"
#include "utils\headers\arrayPrinter.h"
#define GNUPLOT "gnuplot -persist"

typedef enum
{
    BEST_CASE,
    RANDOM,
    WORST_CASE
} scenario;

void executeScenario(sortType type, scenario scenario);
float executeSortOnSelectedScenario(sortType type, int size, scenario selectedScenario);

int main () {

    int i;
    for (i = INSERTION_SORT; i <= QUICK_SORT; i++)
    {
        executeScenario(i, RANDOM);
    }
        
    FILE *gp;
    gp = popen(GNUPLOT, "w");
    
    if (gp == NULL) {
        printf("Erro ao abrir pipe para o GNU plot.\n");
        exit(0);
    }

    fprintf(gp, "plot 'InsertionSort'\n");
    fprintf(gp, "rep 'SelectionSort'\n");
    fprintf(gp, "rep 'MergeSort'\n");
    fprintf(gp, "rep 'HeapSort'\n");
    fprintf(gp, "rep 'QuickSort'\n");
    
    fclose(gp);

    return 0;
}

void executeScenario(sortType type, scenario scenario){

    char *sortName = getName(type);

    FILE *dataFile;
    dataFile = fopen(sortName, "w+");

    fprintf(dataFile, "# size \t %s\n", sortName);

    int size = 500;
    while(size < 40001)
    {
        float timeInSeconds = executeSortOnSelectedScenario(type, size, scenario);
        fprintf(dataFile, "%d \t %.6f\n", size, timeInSeconds);
        size+=500;
    }

    fclose(dataFile);
}

float executeSortOnSelectedScenario(sortType type, int size, scenario selectedScenario){

    int array[size];

    switch (selectedScenario)
    {
        case BEST_CASE:
            generateSortedArray(array, size);
            break;
        case WORST_CASE:
            generateInverseSortedArray(array, size);
            break;
        default:
            generateRandomArray(array, size);
            break;
    }

    return sort(type, array, size);
}