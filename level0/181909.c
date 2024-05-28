#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compar_str(const void* a, const void* b)
{
	return strcmp((char*)a, (char*)b);
}

char** solution(const char* my_string) {
	
	int my_string_len = strlen(my_string);
    char** answer = (char**)malloc(sizeof(char*) * my_string_len);

	for(int i = 0; i < my_string_len; i++)
	{
		answer[i] = strdup(my_string + i);
	}

	qsort(answer, my_string_len, sizeof(char*), compar_str);
	
    return answer;
}
