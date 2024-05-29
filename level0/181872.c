#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* myString, const char* pat) {
    char* answer = (char*)malloc(sizeof(char) * strlen(myString) + 1);

    int i = strlen(myString) - 1;
    for(i; i >= 0; i--)
    {
        if(strncmp(myString + i, pat, strlen(pat)) == 0)
        {
            strncpy(answer, myString, (i + strlen(pat)));
            break;
        }
    }
    answer[i + strlen(pat)] = '\0';
    
    return answer;
}
