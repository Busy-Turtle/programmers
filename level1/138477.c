#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* solution(int k, int score[], size_t score_len) {
    int* answer = (int*)malloc(sizeof(int) * score_len);
    int** list = (int**)malloc(sizeof(int*) * score_len);

    for(int i = 0; i < score_len; i++) {
        list[i] = (int*)malloc(sizeof(int) * k);
        for(int j = 0; j < k; j++) {
            list[i][j] = 0;
        }
    }

    for(int i = 0; i < score_len; i++) {
        for(int j = 0; j < k; j++) {
            if(score[i] > list[i][j]) {
                for(int m = k - 1; m > j; m--) {
                    list[i][m] = list[i][m - 1];
                }
                list[i][j] = score[i];
                break;
            }
        }
        if(i < score_len - 1) {
            memcpy(list[i+1], list[i], sizeof(int) * k);
        }
    }

    for(int i = 0; i < score_len; i++) {
        if(i < k) {
            answer[i] = list[i][i];
        } else {
            answer[i] = list[i][k-1];
        }
    }

    for(int i = 0; i < score_len; i++) {
        free(list[i]);
    }
    free(list);

    return answer;
}

