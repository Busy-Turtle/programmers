#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compar_int(const void* a, const void* b)
{
	return *((int*)a) - *((int*)b);
}

char* solution(const char* my_string, int indices[], size_t indices_len) {
	
	int my_string_len = strlen(my_string);
	char* copy_my_string = (char*)malloc(sizeof(char) * (my_string_len + 1));
	strcpy(copy_my_string, my_string);

    char* answer = (char*)malloc(sizeof(char) * (my_string_len - indices_len + 1));

	qsort(indices, indices_len, sizeof(int), compar_int);
	for(int i = 0; i < indices_len; i++)
	{
		copy_my_string[indices[i]] = '1';
	}

	int answer_idx = 0;
	for(int i = 0; i < my_string_len; i++)
	{
		if(copy_my_string[i] != '1')
		{
			answer[answer_idx++] = copy_my_string[i];
		}	
	}
	answer[answer_idx] = '\0';

    return answer;
}
