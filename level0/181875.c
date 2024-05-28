#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* strArr[], size_t strArr_len) {
    char** answer = (char**)malloc(sizeof(char*) * strArr_len);
	for(int i = 0; i < strArr_len; i++)
	{
		answer[i] = strdup(strArr[i]);
		if(i%2)
		{
			for(int j = 0; j < strlen(answer[i]); j++)
			{
				if(answer[i][j] > 'Z')
				{
					answer[i][j] -= 32;
				}
			}
		}
		else
		{
			for(int j = 0; j < strlen(answer[i]); j++)
			{
				if(answer[i][j] < 'a')
				{
					answer[i][j] += 32;
				}
			}
		}
	}

    return answer;
}
