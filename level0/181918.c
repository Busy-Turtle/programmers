#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* stk = (int*)malloc(sizeof(int) * arr_len);

	int stk_len = -1;
	for(int i = 0; i < arr_len; i++)
	{
		if(stk_len == -1)
		{
			stk[0] = arr[i];
			stk_len = 0;
		}
		else if(stk[stk_len] < arr[i])
		{
			stk[stk_len + 1] = arr[i];
			stk_len++;
		}
		else if(stk[stk_len] >= arr[i])
		{
			stk_len--;
			i--;
		}
	}
	stk = (int*)realloc(stk, sizeof(int) * (stk_len + 1));

    return stk;
}
