#include <stdio.h>
#include "headers\arrayPrinter.h"

void print(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}