#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    int* answer = (int*)malloc(sizeof(int) * 10000);

    int answer_idx = 0;
    char* str = (char*)malloc(sizeof(char) * (intStrs_len + 1));
    for(int i = 0; i < intStrs_len; i++)
    {
        memset(str, 0, sizeof(char) * (intStrs_len + 1));
        strncpy(str, intStrs[i] + s, l);
        if(atoi(str) > k)
        {
            answer[answer_idx++] = atoi(str);
        }
    }
    free(str);
    
    answer = (int*)realloc(answer, sizeof(int) * (answer_idx));
    return answer;
}
