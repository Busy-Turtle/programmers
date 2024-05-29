#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str1, const char* str2) {
	int str1_len = strlen(str1);
	int str2_len = strlen(str2);

    char* answer = (char*)malloc(sizeof(char) * (str1_len + str2_len + 1));
	
	int answer_idx = 0;
	for(int i = 0; i < str1_len; i++)
	{
		answer[answer_idx++] = str1[i];
		answer[answer_idx++] = str2[i];
	}
	answer[answer_idx] = '\0';

    return answer;
}
