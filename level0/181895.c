#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** intervals, size_t intervals_rows, size_t intervals_cols) {
    int* answer = (int*)malloc(sizeof(int) * 200000);

	int answer_idx = 0;
	for(int i = 0; i < intervals_rows; i++)
	{
		for(int j = intervals[i][0]; j <= intervals[i][1]; j++)
		{
			answer[answer_idx++] = arr[j];
		}
	}
	answer[answer_idx] = '\0'; 
	
	return answer;
}
