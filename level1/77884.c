#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
	
	for(int i = left; i <= right; i++)
	{
		int divisor = 2;
		if(i == 1)
		{
			divisor = 1;
		}	

		for(int j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				divisor++;
			}
		}	

		answer += (divisor%2 == 0) ? i : -i;
	}	
    return answer;
}
