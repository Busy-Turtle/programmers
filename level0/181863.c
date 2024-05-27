#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* rny_string) {
    
	char* answer = (char*)malloc(201);
    
	int answer_idx = 0;
	int str_len = strlen(rny_string);
	for(int i = 0; i < str_len; i++)
	{
		if(rny_string[i] == 'm')
		{
			answer[answer_idx++] = 'r';
			answer[answer_idx++] = 'n';
		}
		else
		{
			answer[answer_idx++] = rny_string[i];
		}
	}
	answer[answer_idx] = '\0';

	return answer;
}
