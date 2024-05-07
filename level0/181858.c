#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	
	int* k_arr = (int*)malloc(sizeof(int) * k);
	
	int k_index = 0;
	for(int i = 0; i < arr_len; i++)
	{	
		if(k_index == k)
		{
			break;
		}

		if(arr[i] != arr[i+1])
		{
			bool ret = true;
			for(int j = 0; j < k_index; j++)
			{
				if(k_arr[j] == arr[i])
				{
					ret = false;
				}	
			}
			if(ret==false)
			{
				continue;
			}
			k_arr[k_index] = arr[i];
			k_index++;
		}
	}

	for(int i = k_index; i < k; i++)
	{
		k_arr[i] = -1;
	}

    return k_arr;
}
