#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

short* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (short*)malloc((sizeof(short) * n) + 1);

    //'수' == C218 == 49688
    //'박' == BC15 == 48149
    for(int i = 0; i < n; i++)
    {   
        answer[i] = (i%2 == 0) ? 49688 : 48149;
    }
    
    answer[n] = '\0';

    return (char*)answer;
}


// not solved...
