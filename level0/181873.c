#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* alp) {

    int str_len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * str_len + 1);
   
    for(int i = 0; i < str_len; i++)
    {
        if(alp[0] == my_string[i])
        {
            answer[i] = my_string[i] - 32;
        }
        else
        {
            answer[i] = my_string[i];
        }
    }
    answer[str_len] = '\0';

    return answer;
}

