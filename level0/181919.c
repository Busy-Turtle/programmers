#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc(sizeof(int) * 1000);

    int idx = 0;
    while(n != 1)   
    {   
        if(n%2)
        {
            answer[idx++] = n;
            n = (3 * n) + 1;
        }
        else
        {
            answer[idx++] = n;
            n /= 2;
        }
    }   
    answer[idx] = 1;
    answer[idx+1] = '\0';

    return answer;
}
