#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* myString, const char* pat) {
    char* answer = (char*)malloc(sizeof(char) * strlen(myString));

	char* idx = NULL;
	for(int i = strlen(myString)-1; i >= 0; i--)
	{
		if(strcmp(myString + i, pat) == 0)
		{
			strncpy(answer, mtString, i+1);
		}
	}	

    return answer;
}
