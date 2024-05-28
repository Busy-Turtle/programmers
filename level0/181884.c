#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len, int n) {
	
	int sum = 0;	
	for(int i = 0; i < numbers_len; i++)
	{
		sum += numbers[i];
		if(sum > n)
		{
			return sum;
		}
	}
}
