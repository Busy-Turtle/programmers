#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int elements[], size_t elements_len) {

    bool* sum_arr  = (bool*)malloc(sizeof(bool) * 5000);
	for(int i = 0; i < 5000; i++)
	{
		sum_arr[i] = false;
	}

	int sum = 0;
    for(int i = 1; i < elements_len; i++)
    {
		for(int j = 0; j < elements_len; j++)
		{
			for(int k = 0; k < i; k++)
			{
				sum += elements[(j + k) % elements_len];
			}
			sum_arr[sum] = true;
			sum = 0;	
		}
    }
	for(int i = 0; i < elements_len; i++)
	{
		sum += elements[i]; 
	}
	sum_arr[sum] = true;

	int true_num = 0;
	for(int i = 0; i < 5000; i++)
	{
		if(sum_arr[i]) true_num++;
	}

	free(sum_arr);
    return true_num;
}
