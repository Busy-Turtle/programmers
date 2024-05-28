#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* number) {
    int sum = 0;
	for(int i = 0; i < strlen(number); i++)
	{
		sum += number[i] - '0';
	}
    return sum % 9;
}
