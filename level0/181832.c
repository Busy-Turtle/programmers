#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {

	int num = 1;

    int** answer = (int**)malloc(sizeof(int*) * n);
	for(int i = 0; i < n; i++)
    {
		answer[i] = (int*)malloc(sizeof(int) * n);
    }

	for(int round = 0; round < n/2; round++)
	{
		int right = n - (round * 2); 
		int down = n-1 - (round * 2); 
		int left = n-1 - (round * 2);
		int up = n-2 - (round * 2);
		for(int i = 0; i < right; i++)
		{
			answer[round][round+i] = num++;
		}	
		for(int i = 0; i < down; i++)
		{
			answer[round+1+i][n-1-round] = num++;
		}
		for(int i = 0; i < left; i++)
		{
			answer[n-1-round][n-2-round-i] = num++;
		}
		for(int i = 0; i < up; i++)
		{
			answer[n-2-round-i][round] = num++;
		}
	}

	if(n%2 == 1)
	{
		answer[n/2][n/2] = n * n;
	}

    return answer;
}
