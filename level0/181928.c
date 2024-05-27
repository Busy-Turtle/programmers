#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    char odd_str[6];
	char even_str[6];

	int odd_idx = 0;
	int even_idx = 0;
	for(int i = 0; i < num_list_len; i++)
	{
		if(num_list[i]%2)
		{
			odd_str[odd_idx++] = num_list[i] + '0';
		}
		else
		{
			even_str[even_idx++] = num_list[i] + '0';
		}
	}
	odd_str[odd_idx] = '\0';
	even_str[even_idx] = '\0';

    return atoi(odd_str) + atoi(even_str);
}
