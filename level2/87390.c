#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, long long left, long long right) {

	int** arr = (int**)malloc(sizeof(int*) * n);
	for(int i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * n);	
	}

	long long idx = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			arr[i][j] = i + 1; 
			arr[j][i] =	i + 1;
		}
	}

    int* answer = (int*)malloc(sizeof(int) * (right - left + 1));
	for(int i = 0; i < (right - left + 1); i++)
	{
		int rows = i / n;
		int cols = i % n;
	
		answer[i] = arr[left / n][left % n];
		left++;	
	}

    return answer;
}

