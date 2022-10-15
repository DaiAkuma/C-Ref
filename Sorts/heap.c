#include "heap.h"
//#include <assert.h>

extern void arr_swap(int i, int j, int arr[]);


int left(int i){
	return 2 * i + 1;
}


int right(int i){
	return 2 * i + 2;
}

void heapify(int max_idx, int size , int arr[]){ //maxheap
	int i = max_idx;
	
	do {
		//assert
		int max = i;
		
		if (left(i) < size && arr[left(i)] > arr[max]){
			max = left(i);
		}
		
		if (right(i) < size && arr[right(i)] > arr[max]){
			max = right(i);
		}
		if (max == i){
			break;
		}
		
		arr_swap(i, max, arr); //#######################
		i = max;
			
	} while(1);
}

void build(int size, int arr[]){
	if (size == 0){
		return;
	}

	for (int i = size/2 - 1; i >= 0; --i){ // i = size/2 - 1
		heapify(i, size, arr);	
	}
}




void HeapSort(int size, int arr[]){
	build(size, arr);
	int tmp = size;

	while (size > 1){
		arr_swap(0, size - 1, arr);
		size--;
		heapify(0, size, arr);
	//	build(size, arr);

	}
	size = tmp;
}
