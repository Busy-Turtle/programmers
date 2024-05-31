#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* stk = (int*)malloc(sizeof(int) * arr_len);
    
    int stk_idx = -1;
    for(int i = 0; i < arr_len ; i++)
    {
        if(stk_idx == -1)
        {
            stk[0] = arr[i];
            stk_idx = 0;
        }
        else if(stk[stk_idx] == arr[i])
        {
            stk_idx--;
        }
        else if(stk[stk_idx] != arr[i])
        {
            stk[stk_idx + 1] = arr[i];
            stk_idx++;
        }
    }

	if(stk_idx == -1)
	{
    	stk = (int*)realloc(stk, sizeof(int) * 1);
		stk[0] = -1;
	} 
	else
	{
    	stk = (int*)realloc(stk, sizeof(int) * (stk_idx + 1));
	}

    return stk;
}
