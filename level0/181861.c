#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int arr[], size_t arr_len) {
    
    int answer_len = 0;
    for(int i = 0; i < arr_len; i++)
    {
        answer_len += arr[i];
    }
    
    int* answer = (int*)malloc(sizeof(int) * answer_len);

    int answer_idx = 0;
    for(int i = 0; i < arr_len; i++)
    {
        for(int j = 0; j < arr[i]; j++)
        {
            answer[answer_idx++] = arr[i];
        }
    }

    return answer;
}
