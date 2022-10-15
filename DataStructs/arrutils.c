#include "arrutils.h"
#include <stdio.h>

//extern void printf();

void arr_swap(int i, int j, int arr[]){
	//require i, j < len(arr)
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

void arr_print(int size, int arr[]){
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int arr_len(int arr[]){
	return sizeof(arr) / sizeof(arr[0]);
}

int arr_sorted(int size, int arr[]){
	for (int i = 0; i < size - 1; i++){
		if (arr[i] > arr[i + 1]){
			return 0;
		}
	}
	return 1;
}
