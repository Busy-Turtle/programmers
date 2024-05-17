#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len은 배열 number의 길이입니다.
int solution(int number[], size_t number_len) {
    int answer = 0;

	for(int i = 0; i < number_len; i++)
	{
		for(int j = 0; j < number_len; j++)
		{
			for(int k = 0; k < number_len; k++)
			{
				if((i != j) && (i != k) && (j != k) && (number[i] + number[j] + number[k] == 0))
				{
					answer++;
				}
			}
		}
	} 

	answer /= 3;

    return answer;
}
