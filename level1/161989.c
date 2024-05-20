#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// section_len은 배열 section의 길이입니다.
int solution(int n, int m, int section[], size_t section_len) {
    int answer = 1;
    
    int wedge = 0;
    for(int i = 0; i < section_len - 1; i++)
    {
        if( (section[wedge] + m) > section[i+1])
        {
            continue;
        }
        else
        {
            answer++;
            wedge = i+1;
        }
    }

    return answer;
}

