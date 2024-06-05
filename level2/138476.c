#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compar_int(const int* a, const int* b)
{
    return *a - *b;
}

int compar_int_r(const int* a, const int* b)
{
    return *b - *a;
}

int solution(int k, int tangerine[], size_t tangerine_len) {
   
	qsort(tangerine, tangerine_len, sizeof(int), compar_int);

    int* key = (int*)malloc(sizeof(int) * tangerine_len);
    int key_idx = 0;
    int cnt = 1;
    for(int i = 0; i < tangerine_len - 1; i++)
    {   
        if(tangerine[i] != tangerine[i + 1])
        {   
            key[key_idx++] = cnt;
            cnt = 1;
        }
        else
        {   
            cnt++;
        }
    }
    key[key_idx++] = cnt;

	key = (int*)realloc(key, sizeof(int) *  key_idx);
    qsort(key, key_idx, sizeof(int), compar_int_r);

    int answer = 0;
    int sum = 0;
    for (int i = 0; i < key_idx && sum < k; i++) {
        sum += key[i];
        answer++;
    }

    free(key);
    return answer;
}
