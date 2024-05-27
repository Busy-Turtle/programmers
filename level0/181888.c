#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* answer = (int*)malloc(sizeof(int) * ((num_list_len + 1) / n));

	for(int i = 0; i <= ((num_list_len - 1) / n); i++)
	{
		answer[i] = num_list[n*i];
	}

    return answer;
}
