#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {

	int my_string_len = strlen(my_string);
	int over_string_len = strlen(overwrite_string);

    char* answer = (char*)malloc(sizeof(char) * (my_string_len + 1));

	strcpy(answer, my_string);
	strncpy(answer + s, overwrite_string, over_string_len);	

    return answer;
}
