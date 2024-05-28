#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* names[], size_t names_len) {
    char** answer = (char**)malloc(sizeof(char*) * names_len/5 + 1);

	for(int i = 0; i < names_len/5 + 1; i++)
	{
		answer[i] = (char*)malloc(sizeof(char) * 11);
	}

	int answer_idx = 0;
	for(int i = 0; i < names_len; i+=5)
	{
		answer[answer_idx++] = names[i]; 
	}

    return answer;
}
