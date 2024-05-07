#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// arr_len은 배열 arr의 길이입니다.
// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    int* answer = (int*)malloc(sizeof(int) * queries_rows);

	for(int i = 0; i < queries_rows; i++)
	{
		int s = arr[queries[i][0]];
		int e = arr[queries[i][1]];
		int k = arr[queries[i][2]];

		int temp_len = e - s + 1;

		int* sub_arr = (int*)malloc(sizeof(int) * temp_len);
		memcpy((void*)sub_arr, (const void*)arr + s, temp_len);
		
		for(int n=0; n<temp_len-1; n++)
		{
			for (int m=0; m<temp_len-n-1; m++)
		   	{
           		if (sub_arr[m] > sub_arr[m+1])
			   	{
               		int temp = sub_arr[m];
               		sub_arr[m] = sub_arr[m+1];
               		sub_arr[m+1] = temp;
				}
			}	
		}	

		int ret = -1;
		for(int i = 0; i < temp_len; i++)
		{
			if(sub_arr[i] > k)
			{
				ret = sub_arr[i];
			}	
		}
		
		free(sub_arr);
		answer[i] = ret;
		}
	}
	
    return answer;
}
