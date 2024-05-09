#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// quiz_len은 배열 quiz의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* quiz[], size_t quiz_len) {
    
    char left_token[16];
    char right_token[7];

    int X,Y,Z;

    char** answer = (char**)malloc(sizeof(char*) * quiz_len);
    for (int i = 0; i < quiz_len; i++)
    {
        answer[i] = (char*)malloc(sizeof(char) * 2);
    }

    for(int i = 0; i < quiz_len; i++)
    {
        char* token = strtok(quiz[i],"=");
        strcpy(left_token, token);
        
        token = strtok(NULL,"=");
        strcpy(right_token, token);

        token = strtok(left_token," ");
        X = atoi(token);

        token = strtok(NULL," ");
        if(token[0] == '+')
        {
            token = strtok(NULL," ");
            Y = atoi(token);
        } else {
            token = strtok(NULL," ");
            Y = atoi(token) * -1;
        }
                                    
        token = strtok(right_token," ");
        Z = atoi(token);

        if(Z == X + Y)
        {
            strcpy(answer[i],"O");
        } else {
            strcpy(answer[i],"X");
        }
    }
    
    return answer;
}
