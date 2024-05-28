#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], size_t arr_len, int idx) {
    for(int i = idx + 1; i < arr_len; i++)
	{
		if(arr[i] == 1) return i;
	}
    return -1;
}
