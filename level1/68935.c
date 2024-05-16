#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int answer = 0;

	char ternary[100];

	int i = 0;
	while(n >= 3)
	{
		ternary[i] = n % 3;
		n /= 3;
		i++;
	}
	ternary[i] = n;
	
	int idx = 0;
	while(i >= 0)
	{
		answer += ternary[i] * pow(3, idx);
		idx++;
		i--;
	}

    return answer;
}
