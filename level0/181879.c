#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 1;

	if(num_list_len >= 11)
	{
		answer = 0;
		for(int i = 0; i < num_list_len; i++)
		{
			answer += num_list[i];
		}
	}
	else
	{
		for(int i = 0; i < num_list_len; i++)
		{
			answer *= num_list[i];
		}
	}

    return answer;
}
