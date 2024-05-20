#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int divider(int n)
{
    int div = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if( (n % i) == 0 )
        {
            if (i == n / i) {
                div++;
            } else {
                div += 2;
            }
        }
    }
    return div;
}

int solution(int number, int limit, int power) {

	int answer = 0;

	for(int i = 1; i <= number; i++)
	{
		int div = divider(i);
		if( div <= limit )
		{
			answer += div;
		} 
		else 
		{
			answer += power;
		}
	}

    return answer;
}
