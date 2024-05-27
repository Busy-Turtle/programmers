#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int n) {

	if(arr_len%2 == 0)
	{
		for(int i = 1; i < arr_len; i+=2)
		{
			arr[i] += n;
		}
	}
	else
	{
		for(int i = 0; i < arr_len; i+=2)
		{
			arr[i] += n;
		}
	}
    return arr;
}
