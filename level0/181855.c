#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* strArr[], size_t strArr_len) {
    int answer = 0;
	int length_arr[31] = {0};

	for(int i = 0; i < strArr_len; i++)
	{
		length_arr[strlen(strArr[i])] += 1;
	}
	
	for(int i = 0; i < 31; i++)
	{
		if(answer < length_arr[i])
		{
			answer = length_arr[i];
		}
	}

    return answer;
}
