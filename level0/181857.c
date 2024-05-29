#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int* solution(int arr[], size_t arr_len) {

	int cnt = 9;
	while(true)
	{
		if(arr_len >= pow(2, cnt--))
		{
			cnt++;
			break;
		}
	}

	int shortage = pow(2, cnt + 1) - arr_len;

	arr = (int*)realloc(arr, sizeof(int) * (arr_len + shortage));

	for(int i = arr_len; i < arr_len + shortage; i++)
	{
		arr[i] = 0;
	}

    return arr;
}
