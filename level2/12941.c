#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compar_int(const void* a, const void* b)
{
	return *((int*)a) - *((int*)b); 
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;

	qsort(A, A_len, sizeof(int), compar_int);
	qsort(B, B_len, sizeof(int), compar_int);

	for(int i = 0; i < A_len; i++)
	{
		answer += A[i] * B[A_len - 1 - i];
	}

    return answer;
}
