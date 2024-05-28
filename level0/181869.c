#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_string) {

    char** answer = (char**)malloc(sizeof(char*) * 500);

    int my_string_len = strlen(my_string);
    char* copy_str = (char*)malloc(sizeof(char) * my_string_len + 1);
    strcpy(copy_str, my_string);

    int answer_idx = 0;
    char* token = strtok(copy_str, " ");
    while(token != NULL)
    {
        answer[answer_idx++] = strdup(token);
        token = strtok(NULL, " ");
    }
    answer[answer_idx] = '\0';

    return answer;
}
