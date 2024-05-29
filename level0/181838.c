#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int date1[], size_t date1_len, int date2[], size_t date2_len) {
    
	if(date1[0] < date2[0])
	{
		return 1;
	}
	else if((date1[0] == date2[0]) && (date1[1] < date2[1]))
	{
		return 1;
	}
	else if((date1[0] == date2[0]) && (date1[1] == date2[1]) && (date1[2] < date2[2]))
	{
		return 1;
	}

    return 0;
}
