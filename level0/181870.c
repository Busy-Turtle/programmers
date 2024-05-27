#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* strArr[], size_t strArr_len) {
    char** answer = (char**)malloc(sizeof(char*) * 1000);
    
	const char* str = "ad";
	int answer_idx = 0;
	for(int i = 0; i < strArr_len; i++)
	{
		if(strstr(strArr[i], str) == NULL)
		{
			answer[answer_idx++] = strArr[i];
		}
		else
		{
			continue;
		}
	}
	answer[answer_idx] = '\0';

	return answer;
}
