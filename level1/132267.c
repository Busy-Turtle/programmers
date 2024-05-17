#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;

	int full_cola = 0;
	int empty_cola = 0;

	while(n >= a)
	{ 
		full_cola = (n / a) * b;	
		empty_cola = n % a;
		n = empty_cola + full_cola;

		answer += full_cola;
	}

    return answer;
}
