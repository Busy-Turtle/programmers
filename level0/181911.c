#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_strings[], size_t my_strings_len, int** parts, size_t parts_rows, size_t parts_cols) {
	
	char* answer = (char*)malloc(sizeof(char) * 10001);

	int answer_idx = 0;
	for(int i = 0; i < parts_rows; i++)
	{
		for(int j = parts[i][0]; j <= parts[i][1]; j++)
		{
			answer[answer_idx++] = my_strings[i][j];
		}
	}
	answer[answer_idx] = '\0';

    return answer;
}
