#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* str_list[], size_t str_list_len) {
    char** answer = (char**)malloc(sizeof(char*) * str_list_len);

    int answer_idx = 0;
    for(int i = 0; i < str_list_len; i++)
    {
        if(str_list[i][0] == 'l')
        {
            for(int j = 0; j < i; j++)
            {
                answer[answer_idx++] = str_list[j];
            }
			break;
        }
        else if(str_list[i][0] == 'r')
        {
            for(int j = i + 1; j < str_list_len; j++)
            {
                answer[answer_idx++] = str_list[j];
            }
			break;
        }
    }
	
	if(answer_idx == 0)
	{
		answer = (char**)realloc(answer, sizeof(char*));
	}
	else
	{
    	answer = (char**)realloc(answer, sizeof(char*) * answer_idx);
	}

    return answer;
}
