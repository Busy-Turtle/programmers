#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    int** answer = (int**)malloc(sizeof(int*) * n);
	for(int i = 0; i < n; i++)
	{
		answer[i] = (int*)malloc(sizeof(int) * n);
		memset(answer[i], 0, sizeof(int) * n);
		answer[i][i] = 1;
	}

    return answer;
}
