#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {

	int mid = (total/num);

    int* answer = (int*)malloc(sizeof(int) * num);

	if(num % 2 == 0)
	{
		int s = mid - (num/2-1);
		for(int i = 0; i < num; i++)
		{
			answer[i] = s++;
		}
	} else {
			
		int s = mid - (num/2);
		for(int i = 0; i < num; i++)
		{
			answer[i] = s++;
		}
	}
    return answer;
}
