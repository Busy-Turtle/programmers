#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* myString) {

    int x_count = 0;
    for(int i = 0; i < strlen(myString); i++)
    {
        if(myString[i] == 'x')
        {
            x_count++;
        }
    }
    
    int* answer = (int*)malloc(sizeof(int) * (x_count + 1));

	int prev_x = 0;
	int idx = 0;
	for(int i = 0; i < strlen(myString); i++)
	{
		if((i == 0) && (myString[i] == 'x'))
		{
			answer[idx++] = 0;
		}
		else if((i >= 1) && (myString[i] == 'x'))
		{
			answer[idx++] = i - prev_x - 1; 
			prev_x = i;
		}
		else if((i == strlen(myString) - 1) && myString[i] == 'x')
		{
			answer[idx++] = i - prev_x - 1;
			answer[idx++] = 0;
		}
	}

	if(myString[strlen(myString)] != 'x')
	{
		answer[idx] = strlen(myString) - prev_x - 1;
	}

    return answer;
}
