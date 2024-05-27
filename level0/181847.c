#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* n_str) {
    char* answer = (char*)malloc(11);
	int n = atoi(n_str);
	sprintf(answer, "%d", n);
	
	return answer;
}
