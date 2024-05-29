#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], size_t arr_len) {

    int old_sum = 0;
	for(int i = 0; i < arr_len; i++)
	{
		old_sum += arr[i];
	}

    int x = 1;
    while(true)
    {
		int now_sum = 0;
 		
        for(int i = 0; i < arr_len; i++)
        {
            if((arr[i]%2 == 1) && (arr[i] < 50))
            {
                arr[i] = (arr[i] * 2) + 1;
            }
            else if((arr[i]%2 == 0) && (arr[i] >= 50))
            {
                arr[i] /= 2;
            }
        }
		
    	for(int i = 0; i < arr_len; i++)
        {   
            now_sum += arr[i];
        }

        if(old_sum == now_sum)
        {
            return x - 1;
        }

        old_sum = now_sum;
		x++;
    }
}   
