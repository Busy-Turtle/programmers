#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int m, int c) {
    
	int answer_len = (strlen(my_string) / m);	
	char* answer = (char*)malloc(sizeof(char) * (answer_len + 1));

	for(int i = 0; i < answer_len; i++)
	{
		answer[i] = my_string[c - 1 + (i * m)];
	}
	answer[answer_len] = '\0';

    return answer;
}
