#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int q, int r, const char* code) {
    int code_len = strlen(code);
    char* answer = (char*)malloc(sizeof(char) * code_len + 1);
    
    int answer_idx = 0;
    for(int i = 0; i < code_len; i += q)
    {
        answer[answer_idx++] = code[i + r];
    }
    answer = (char*)realloc(answer, sizeof(char) * (answer_idx + 1));
    answer[answer_idx] = '\0';

    return answer;
}
