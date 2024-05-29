#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len) {
    int* X = (int*)malloc(sizeof(int) * 1000);

	int X_idx = 0;
	for(int i = 0; i < flag_len; i++)
	{
		if(flag[i])
		{
			for(int j = 0; j < arr[i] * 2; j++)
			{
				X[X_idx++] = arr[i]; 
			}
		}
		else
		{
			X_idx -= arr[i];
		}
	}
	X = (int*)realloc(X, sizeof(int) * X_idx);

    return X;
}
