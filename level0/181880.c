#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;

	for(int i = 0; i < num_list_len; i++)
	{
		int cnt = 0;
		while(num_list[i] != 1)
		{
			if(num_list[i]%2)
			{
				num_list[i] = (num_list[i] - 1) / 2;
			}
			else
			{
				num_list[i] /= 2;
			}

			cnt++;
		}
		answer += cnt;
	}
	
    return answer;
}
