#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start, int end_num) {
    int* answer = (int*)malloc(sizeof(int) * (start - end + 1));

	for(int i = start_num; i >= end_num; i--)
	{
		answer[start_num - i] = i;
	}	
    return answer;
}
