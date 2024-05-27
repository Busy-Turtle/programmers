#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    char* answer = (char*)malloc(n + 1);

	memcpy(answer, my_string + strlen(my_string) - n, n);
	answer[n] = '\0';

	return answer;
}
