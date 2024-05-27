#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compar_int(const void* a, const void* b)
{
	return *((int*)a) - *((int*)b);
}

int* solution(int num_list[], size_t num_list_len) {
    
	int* answer = (int*)malloc(sizeof(int) * 5);

	qsort(num_list, num_list_len, sizeof(int), compar_int);
    
	memcpy(answer, num_list, sizeof(int) * 5);

	return answer;
}
