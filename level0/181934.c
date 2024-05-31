#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* ineq, const char* eq, int n, int m) {
	if(ineq[0] == '<')
	{
		if(eq[0] == '=')
		{
			return ((n - m) <= 0) ? 1 : 0; 
		}
		else
		{
			return ((n - m) > 0) ? 0 : 1;
		}
	}
	else
	{
		if(eq[0] == '=')
		{
			return ((n - m) >= 0) ? 1 : 0;
		}
		else
		{
			return ((n - m) < 0) ? 0 : 1;
		}
	}
}
