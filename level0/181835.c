#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int k) {
    
	if(k%2 == 1)
	{
		for(int i = 0; i < arr_len; i++)
		{
			arr[i] *= k;
		}
	}
	else
	{
		for(int i = 0; i < arr_len; i++)
		{
			arr[i] += k;
		}
	}

	return arr;
}
