#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int rank[], size_t rank_len, bool attendance[], size_t attendance_len) {

	int* ok_arr = (char*)malloc(sizeof(int) * 3);
	
	int ranking = 1;
	int ok_arr_idx = 0;
	while(ok_arr_idx != 3)
	{
		for(int i = 0; i < rank_len; i++)
		{
			if(rank[i] == ranking)
			{
				if(attendance[i])
				{
					ok_arr[ok_arr_idx++] = i; 
				}
			}
		}
		ranking++;
	}

	int answer = (10000 * ok_arr[0]) + (100 * ok_arr[1]) + ok_arr[2];
	free(ok_arr);
    return answer;
}
