#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* myStr) {
    char** answer = (char**)malloc(sizeof(char*) * strlen(myStr)/2);
	char* copy_myStr = (char*)malloc(sizeof(char) * (strlen(myStr) + 1));
	strcpy(copy_myStr, myStr);

	int count = 0;
	char* token = strtok(copy_myStr, "abc");
	while(token != NULL)
	{
		answer[count++] = strdup(token);
		token = strtok(NULL, "abc");
	}
	
	if(count)
	{
		answer = (char**)realloc(answer, sizeof(char*) * count);
	}
	else
	{
		answer = (char**)realloc(answer, sizeof(char*) * 1);
		answer[0] = strdup("EMPTY");
	}

	free(copy_myStr);

    return answer;
}
