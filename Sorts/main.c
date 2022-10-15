
#include <stdio.h>
#include <stdlib.h>
#inlcude "../DataStrucs/arrutils.h"
// #include "bubble.h"
// #include "select.h"
#include "insert.h"
// #include "heap.h"

//in-place sorting.

extern void arr_swap(int i, int j, int arr[]); //from arrutils

extern void arr_print(int size, int arr[]);


int main(int argc, char *argv[]){
	int arr[argc - 1];
	int size = argc - 1;

	for (int i = 1; i < argc; i++){
		arr[i-1] = atoi(argv[i]);
	}

	//BubbleSort(size, arr);
	//SelectionSort(size, arr);
	InsertionSort(size, arr);

//	HeapSort(size, arr);
		
	arr_print(size, arr);
	
	return 0;
}
