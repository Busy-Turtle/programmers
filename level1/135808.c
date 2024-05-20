#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
    int int_a = *((int*)a);
    int int_b = *((int*)b);

    return (int_a > int_b) - (int_a < int_b);
}

int solution(int k, int m, int score[], size_t score_len) {

    int answer = 0;

    qsort(score, score_len, sizeof(int), compare_int);

    for(int i = 0; i < (score_len / m); i++)
    {
        answer += m * score[score_len - (m * (i + 1))];
    }

    return answer;
}


