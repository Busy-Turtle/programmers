#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int arr[], size_t arr_len) {

	int* index_arr[100000] = {0};
	
	for(int i = 0; i < arr_len; i++)
	{
		if(arr[i] == 2)
		{
			index_arr[i] = 1;
		}
	}
	
	int first_two_idx = -1;
	int last_two_idx = 0;
	int two_count = 0;
	for(int i = 0; i < 100000; i++)
	{
		if(index_arr[i] == 1)
		{
			if(first_two_idx == -1)
			{
				first_two_idx = i;
			}
			two_count++;
			last_two_idx = i;
		}
	}
	
	int* answer = NULL
	switch(two_count)
	{
		case 0:
			answer = (int*)malloc(sizeof(int) * 1);
			answer[0] = -1;
			break;
		case 1: 
			answer = (int*)malloc(sizeof(int) * 1);
			answer[0] = 2;
			break;
		default:
			int answer_len = (last_two_idx - first_two_idx + 1);
			answer = (int*)malloc(sizeof(int) * answer_len);
			memcpy(answer, arr + first_two_idx, sizeof(int) * answer_len);
			break;
	}

	return answer;
}
