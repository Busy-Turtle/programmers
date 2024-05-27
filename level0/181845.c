#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {

	char* answer = (char*)malloc(sizeof(char) * 6);
	sprintf(answer, "%d", n);

	return answer;
}
