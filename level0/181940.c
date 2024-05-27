#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int k) {
    char* answer = (char*)malloc(sizeof(char) * (strlen(my_string) * k) + 1);
	memset(answer, 0, sizeof(char) * (strlen(my_string) * k) + 1);   

	for(int i = 0; i < k; i++)
	{
		strcat(answer, my_string);
	}
	answer[strlen(my_string) * k + 1] = '\0';

	return answer;
}
