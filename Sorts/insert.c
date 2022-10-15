#include "insert.h"

void InsertionSort(int size, int arr[]){
	int j;
	int insert_value;

	for (int i = 1; i < size; i++){
		
		insert_value = arr[i];
		j = i;

		while (j > 0 && arr[j - 1] > insert_value){
			arr[j] = arr[j - 1];
			j--;
		}
		
		arr[j] = insert_value;
	
	}
}
