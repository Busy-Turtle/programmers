#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int common_multiple(int a, int b)
{
	int origin_a = a;
	int origin_b = b;
	int gdc = 0;
	while (b != 0) 
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
	gdc = a;
	
	return origin_a * origin_b / gdc;
}

int solution(int arr[], size_t arr_len) {

	int multiple = common_multiple(arr[0], arr[1]);
	for(int i = 2; i < arr_len; i++)
	{
		multiple = common_multiple(multiple, arr[i]);
	}

    return multiple;
}
