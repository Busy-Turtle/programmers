#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    bool* bool_arr = (bool*)malloc(sizeof(bool) * 201);                      
    memset(bool_arr, 0, sizeof(bool) * 201);

    for(int i = 0; i < numbers_len; i++)
    {
        for(int j = i + 1; j < numbers_len; j++)
        {
            bool_arr[numbers[i] + numbers[j]] = true;
        }
    }

    int true_num = 0;
    for(int i = 0; i < 201; i++)
    {
        if(bool_arr[i])
        {
            true_num++;
        }
    }

    int* answer = (int*)malloc(sizeof(int) * true_num);

    int answer_idx = 0;
    for(int i = 0; i < 201; i++)
    {
        if(bool_arr[i])
        {
            answer[answer_idx++] = i;
        }
    }

    return answer;
}


