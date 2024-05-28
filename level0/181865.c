#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* binomial) {
    int answer = 0;

    char* copy_binomial = (char*)malloc(sizeof(char) * strlen(binomial) + 1);
    strcpy(copy_binomial, binomial);

    char* a;
    char* op;
    char* b;
    
    a = strtok(copy_binomial, " ");
    op = strtok(NULL, " ");
    b = strtok(NULL, " ");

    switch(op[0])
    {
        case '+':
            answer = atoi(a) + atoi(b);
            break;
        case '-':
            answer = atoi(a) - atoi(b);
            break;
        case '*':
            answer = atoi(a) * atoi(b);
            break;
    }
        
    return answer;
}
