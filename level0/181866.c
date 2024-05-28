#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compar_str(const void* a, const void* b)
{
	return strcmp(*((const char**)a), *((const char**)b));
}

char** solution(const char* myString) {
    char** answer = (char**)malloc(sizeof(char*) * strlen(myString));

	char* copy_str = (char*)malloc(sizeof(char) * strlen(myString));
	strcpy(copy_str, myString);

	int answer_idx = 0;
	char* token = strtok(copy_str, "x");
	while(token != NULL)
	{
		answer[answer_idx++] = strdup(token);
		token = strtok(NULL, "x");
	}

	qsort(answer, answer_idx, sizeof(const char*), compar_str);

    return answer;
}
