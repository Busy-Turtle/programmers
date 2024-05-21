#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int min(int a, int b)
{
    return (a <= b) ? a : b;
}

char* solution(const char* X, const char* Y) {

    int gganbu_arr[10][2] = {0, };

    int count = 0;
    for(int i = 0; i < 10; i++)
    {
        count = 0;
        for(int j = 0; j < strlen(X); j++)
        {
            if(i == (X[j] - '0') )
            {
                count++;
            }
        }
        gganbu_arr[i][0] = count;

        count = 0;
        for(int k = 0; k < strlen(Y); k++)
        {
            if(i == (Y[k] - '0') )
            {
                count++;
            }
        }
        gganbu_arr[i][1] = count;
    }

    char* answer = (char*)malloc(sizeof(char) * 3000001);
    memset(answer, 'n', 1);

    int total_idx = 0;
    for(int i = 9; i >= 0; i--)
    {
        for(int j = 0; j < min(gganbu_arr[i][0], gganbu_arr[i][1]); j++)
        {
            answer[total_idx++] = i + '0';
        }
    }

    if(total_idx == min(gganbu_arr[0][0], gganbu_arr[0][1]))
    {
        answer[1] = '\0';
    }

    if(answer[0] == 'n')
    {
        answer[total_idx++] = '-';
        answer[total_idx++] = '1';
    }
    answer[total_idx] = '\0';

    return answer;
}


