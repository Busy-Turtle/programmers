#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* is_suffix) {

	for(int i = strlen(my_string) - 1; i >= 0; i--)
	{
		if(strcmp(my_string + i, is_suffix))
		{
			return 1;
		}
	}

    return 0;
}
