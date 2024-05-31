#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* picture[], size_t picture_len, int k) {
	
	int total_rows = picture_len * k;
	int origin_cols = strlen(picture[0]);
	int total_cols = origin_cols * k;

    char** answer = (char**)malloc(sizeof(char*) * total_rows);
	for(int i = 0; i < total_rows; i++)
	{
		answer[i] = (char*)malloc(sizeof(char) * (total_cols + 1));
	}

	for(int i = 0; i < total_rows; i += k)
	{
		for(int j = 0; j < origin_cols; j++)
		{
			for(int m = (j * k); m < (j * k) + k; m++)
			{
				answer[i][m] = picture[i][j];
			}
		}
		answer[i][total_cols] = '\0';

		for(int n = 1; n < k; n++)
		{
			strcpy(answer[i + n], answer[i]);
		}
	}	

    return answer;
}
