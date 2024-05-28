#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* todo_list[], size_t todo_list_len, bool finished[], size_t finished_len) {
    char** answer = (char**)malloc(sizeof(char*) * todo_list_len);
	for(int i = 0; i < todo_list_len; i++)
	{
		answer[i] = (char*)malloc(sizeof(char) * 21);
	}
	
	int answer_idx = 0;
	for(int i = 0; i < finished_len; i++)
	{
		if(!finished[i]) answer[answer_idx++] = todo_list[i];
	}

    return answer;
}
