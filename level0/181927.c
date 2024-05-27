#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
	int* answer = (int*)malloc(sizeof(int) * num_list_len + 1);

	memcpy(answer, num_list, sizeof(int) * num_list_len);

	if(num_list[num_list_len-1] > num_list[num_list_len-2])
	{
		answer[num_list_len] = num_list[num_list_len-1] - num_list[num_list_len-2];
	}
	else
	{
		answer[num_list_len] = num_list[num_list_len-1] * 2;
	}

    return answer;
}
