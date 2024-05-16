#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

long long solution(int a, int b) {
    long long answer = 0;
    int big = max(a,b);
    int small = min(a,b);

    for(small; small <= big; small++)
    {
	answer += small;
    } 

    return answer;
}
