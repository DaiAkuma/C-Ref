//#include <bubble.h>


extern void arr_swap(int i, int j, int arr[]); // from DataStructs/arrutils.c

void BubbleSort(const int size, int arr[]){
	

	for (int i = size; i > 1; i--){
		for (int j = 0; j < i - 1; j++){
		
			//(arr[j] > arr[j + 1])  ? swap(j, j+1, arr): continue;  
			
			if (arr[j] > arr[j + 1]){
				arr_swap(j, j + 1, arr);
			}
		}
	}
}

void bubble_swap_check(){}
