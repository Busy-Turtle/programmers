#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(sizeof(int) * (num_list_len));

	int answer_idx = 0;
	switch(n)
	{
		case 1:
			for(int i = 0; i <= slicer[1]; i++)
			{
				answer[answer_idx++] = num_list[i];
			}
			break;

		case 2:
			for(int i = slicer[0]; i < num_list_len; i++)
			{
				answer[answer_idx++] = num_list[i];
			}
			break;

		case 3:
			for(int i = slicer[0]; i <= slicer[1]; i++)
			{
				answer[answer_idx++] = num_list[i];
			}
			break;

		case 4:
			for(int i = slicer[0]; i <= slicer[1]; i += slicer[2])
			{
				answer[answer_idx++] = num_list[i];
			}
			break;
	}
	answer = (int*)realloc(answer, sizeof(int) * answer_idx);

    return answer;
}
