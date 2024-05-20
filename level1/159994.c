#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    char* answer = (char*)malloc(sizeof(char) * 4);

	int total_idx = 0;
	int idx1 = 0; 
	int idx2 = 0;

	for(int i = 0; i < goal_len; i++)
	{
		if( ((i - idx1) < cards1_len) && (strcmp(goal[i],cards1[i - idx1])) == 0 )
		{
			idx2++;
		} 
		else if( ((i - idx2) < cards2_len) && (strcmp(goal[i],cards2[i - idx2])) == 0 )
		{
			idx1++;
		}
		else
		{
			strcpy(answer, "No");
			return answer;
		}
	}		
	
	strcpy(answer, "Yes");

    return answer;
}
