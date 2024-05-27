#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* is_prefix) {
    
	char* find = strstr(my_string, is_prefix);
	if(find == NULL)
	{
		return 0;
	}
	else
	{
		return (find - my_string) ? 0 : 1
	}
}
