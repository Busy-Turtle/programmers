#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* my_string) {
    int* answer = (int*)malloc(sizeof(int) * 52);
	memset(answer, 0, sizeof(int) * 52);

	for(int i = 0; i < strlen(my_string); i++)
	{
		if(my_string[i] < 'a')
		{
			answer[my_string[i] - 'A'] += 1;
		}
		else
		{
			answer[my_string[i] - 'a' + 26] += 1;
		}
	}

    return answer;
}
