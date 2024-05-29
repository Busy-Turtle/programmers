#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    int answer = 0;

	for(int i = 0; i < strlen(myString); i++)
	{
		if(strncmp(myString + i, pat, strlen(pat) == 0) answer++;
	}

    return answer;
}
