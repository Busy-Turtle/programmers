#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
	if( a%2 && b%2 )
	{
		return a*a + b*b;
	}
	else if ( (a%2 - b%2) )
	{
		return 2 * (a + b);
	}
	else 
	{
		return abs(a - b);
	}
}
