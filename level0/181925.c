#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int numLog[], size_t numLog_len) {
    char* answer = (char*)malloc(sizeof(char) * numLog_len + 1);
	
	int i = 0;
	for(i; i < numLog_len - 1; i++)
	{
		switch(numLog[i+1] - numLog[i])
		{
			case -1:
				answer[i] = 's';
				break;
			case 1:
				answer[i] = 'w';
				break;
			case 10:
				answer[i] = 'd';
				break;
			case -10:
				answer[i] = 'a';
				break;
		}
	}
	answer[i] = '\0';

    return answer;
}
