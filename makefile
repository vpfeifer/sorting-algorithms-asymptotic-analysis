sorter:
	gcc -o sorter .\main.c 					\
				  .\sort\sort.c 			\
				  .\sort\insertionSort.c 	\
				  .\sort\selectionSort.c 	\
				  .\sort\mergeSort.c 		\
				  .\sort\heapSort.c			\
				  .\sort\quickSort.c		\
				  .\utils\arrayPrinter.c 	\
				  .\utils\arraySwapper.c 	\
				  .\utils\arrayGen.c