#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {

	long long n = 1;
	long long m = 0;

	for(int i = 0; i < num_list_len; i++)
	{
		n *= num_list[i];
		m += num_list[i];
	}

    return (n > m*m) ? 0 : 1;
}
