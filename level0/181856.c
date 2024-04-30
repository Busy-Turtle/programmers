#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arr1[4] = {100, 17, 84, 1};
int arr2[4] = {55, 12, 65, 36};

int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len)
{
	int answer = 0;

	if(arr1_len > arr2_len)
	{
		answer = 1;
	} 
	else if(arr1_len < arr2_len) 
	{
		answer = -1;
	}
       	else 
	{
		int sum1 = 0;
		int sum2 = 0;

		for(int i = 0; i < arr1_len; i++)
		{
			sum1 += arr1[i];
			sum2 += arr2[i];
		}	
		
		if(sum1 > sum2)
		{
			answer = 1;
		}
		else if(sum1 < sum2)
		{
			answer = -1;
		} 
		else 
		{
			answer = 0;
		}
	}

	return answer;
}
