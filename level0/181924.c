#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    
	for(int i = 0; i < queries_row; i++)
	{
		int temp = 0;
		temp = arr[queries[i][0]];
		arr[queries[i][0]] = arr[queries[i][1]];
		arr[queries[i][1]] = temp;	
	}

	return arr;
}
