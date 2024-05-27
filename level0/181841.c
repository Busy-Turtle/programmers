#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
    char* answer = (char*)malloc(100);
    
	int answer_idx = 0;
	for(int i = 0; i < str_list_len; i++)
	{
		if(strstr(str_list[i], ex))
		{
			continue;
		}
		else
		{
			for(int j = 0; j < strlen(str_list[i]); j++)
			{
				answer[answer_idx++] = str_list[i][j];
			}
		}
	}
	answer[answer_idx] = '\0';

	return answer;
}
