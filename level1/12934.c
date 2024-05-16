
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {

	long long num = 1;
	bool right = false;
	long long answer = 0;

	while(num < 10000000)
	{
		if((n/num == num) && (n%num == 0))
		{
			answer = (num + 1) * (num + 1);
			return answer;
		}

		num++;
	}

	answer = -1;
    return answer;
}
