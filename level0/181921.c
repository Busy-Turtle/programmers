#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int l, int r) {
    int* temp_answer = (int*)malloc(sizeof(int)*64);
    char temp_str[8];
    int sig_num = 0;
    int arg_len = 0;
    for(int i = l; i <= r; i++)
    {
        bool ret = true;
        sprintf(temp_str,"%d",i);
        arg_len = strlen(temp_str);
        for(int j = 0; j < arg_len; j++)
        {
            if( temp_str[j] != '5' && temp_str[j] != '0' )
            {
                ret = false;
                break;
            }
        }
        if(ret != false)
        {
            temp_answer[sig_num++] = atoi(temp_str);
        }
    }
    
    int* answer;
    if(sig_num == 0)
    {
        answer = (int*)malloc(sizeof(int) * 1);
        answer[0] = -1;
        free(temp_answer);
    } else {
        answer = (int*)malloc(sizeof(int)*(sig_num));
        memcpy(answer, temp_answer, sizeof(int) * sig_num);
        free(temp_answer);
    }

    return answer;

}
