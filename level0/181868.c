#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_string) {

    char** temp_answer = (char**)malloc(sizeof(char*) * 500);

	int idx = 0;
	char* token = strtok(my_string, " ");
	while(token != NULL)
	{
		temp_answer[idx++] = strdup(token);
		token = strtok(NULL, " ");
	}

	char** answer = (char**)malloc(sizeof(char*) * idx);
	memcpy(answer, temp_answer, sizeof(char*) * idx);

	free(temp_answer);

    return answer;
}
