#include "select.h"


extern void arr_swap(int i, int j, int arr[]);

int min_idx(int size, int arr[]){
	
	int idx = 0;

	for (int i = 1; i < size; i++){
		if (arr[i] < arr[idx]){
			idx = i;					
		}
	}
	return idx;
}

void SelectionSort(int size, int arr[]){
	
	for (int i = 0; i < size; i++){
		arr_swap(min_idx(size - i, &arr[i]) + i, i, arr);
	}
}

