#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    int* answer = (int*)malloc(sizeof(int) * 1000000);

	int i = 0;
	int origin_k = k;
	while(n >= k)
	{
		answer[i] = k;
		i++;
		k += origin_k;
	}
	answer[i+1] = '\0';

    return answer;
}
