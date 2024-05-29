#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int s, int e) {
    char* answer = (char*)malloc(sizeof(char) * (strlen(my_string) + 1));
  	strcpy(answer, my_string);

	for(int i = 0; i < (e - s + 1)/2 ; i++)
	{
		char* temp = NULL;
		temp = answer[s + i];
		answer[s + i] = answer[e - i];
		answer[e - i] = temp;
	}

	return answer;
}
