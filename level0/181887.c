#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {

	int odd_sum = 0;
	int even_sum = 0;

	for(int i = 0; i < num_list_len; i++)
	{
		if((i+1)%2)
		{
			odd_sum += num_list[i];
		}
		else
		{
			even_sum += num_list[i];
		}
	}

    return (odd_sum >= even_sum) ? odd_sum : even_sum;
}
