#include "headers/arraySwapper.h"

void swap(int array[], int fromIndex, int toIndex){
    int aux = array[fromIndex];
    array[fromIndex] = array[toIndex];
    array[toIndex] = aux;
}