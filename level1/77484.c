#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    
    int* answer = (int*)malloc(sizeof(int) * 2); 

    int win_num = 0, zero_num = 0;
    for(int i = 0; i < lottos_len; i++)
    {
        if(lottos[i] != 0)
        {   
            for(int j = 0; j < lottos_len; j++)
            {
                if(lottos[i] == win_nums[j])
                {
                    win_num++;
                }
            }
        }
        else
        {
            zero_num++;
        }
    }
    
    if(win_num == 0)
    {
		if(zero_num < 2)
		{
			answer[0] = 6;
			answer[1] = 6;
		}
		else
		{       
			answer[0] = 7 - zero_num;
        	answer[1] = 6;
		}
    }
    else if(win_num == 1)
    {
        answer[0] = 7 - win_num - zero_num;
        answer[1] = 6;
    }
    else if(win_num == 2)
    {
        answer[0] = 5 - zero_num;
        answer[1] = 5;
    }
    else
    {
        answer[0] = 7 - win_num - zero_num;
        answer[1] = 7 - win_num;
    }

    return answer;
}

