#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
	int y = x;

    int sum = 0;
    int n = 1;
    while(n <= x)
    {
		sum += y % 10;
		y /= 10;
		n *= 10;
    }

	if(x % sum != 0)
	{
		answer = false;
	}

    return answer;
}
