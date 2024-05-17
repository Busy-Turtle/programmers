#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {

    int answer_len = 0 + 1;
    for(int i = 1; i < food_len; i++)
    {
        answer_len += (food[i]/2) * 2;
    }

    char* answer = (char*)malloc((sizeof(char) * answer_len) + 1);

    int left_idx = 0;
    int right_idx = answer_len - 1;

    for(int food_idx = 1; food_idx < food_len; food_idx++) {
        int count = food[food_idx] / 2;
        for(int j = 0; j < count; j++) {
            answer[left_idx++] = food_idx + '0';
            answer[right_idx--] = food_idx + '0';
        }
    }
    answer[answer_len/2] = '0';
    answer[answer_len] = '\0';

    return answer;
}



