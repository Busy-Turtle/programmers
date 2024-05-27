#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {

	int ab = 0;
	int ba = 0;

	char str_a[5];
	char str_b[5];

	char str_ab[9];
	char str_ba[9];

	sprintf(str_a, "%d", a);
	sprintf(str_b, "%d", b);

   	strcat(str_ab, str_a);
	strcat(str_ab, str_b);

   	strcat(str_ba, str_b);
	strcat(str_ba, str_a);

	ab = atoi(str_ab);
	ba = atoi(str_ba);

    return ab >= ba ? ab : ba ;
}
