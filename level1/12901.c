#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    int days_of_month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char* week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

	int days = 5;

	for(int i = 0; i < a; i++)
	{
		days += days_of_month[i];
	}

	days += b-1;

    return week[ days%7 ];
}
