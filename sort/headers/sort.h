typedef enum
{
    INSERTION_SORT,
    SELECTION_SORT,
    MERGE_SORT,
    HEAP_SORT,
    QUICK_SORT
} sortType;

float sort(sortType type, int array[], int size);