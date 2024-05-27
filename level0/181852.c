#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compar_int(const void* a, const void* b)
{
	return *((int*)a) - *((int*)b);
}


int* solution(int num_list[], size_t num_list_len) {
    
	qsort(num_list, num_list_len, sizeof(int), compar_int);
	
	int* answer = (int*)malloc(sizeof(int) * (num_list_len - 5));
    
	memcpy(answer, num_list + 5, sizeof(int) * (num_list_len - 5));

	return answer;
}
