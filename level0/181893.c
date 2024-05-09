#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// query_len은 배열 query의 길이입니다.
int* solution(int arr[], size_t arr_len, int query[], size_t query_len) {
    int s_idx = 0;
    int e_idx = 0;
    int d_len = 0;
    
    int* temp_arr = (int*)malloc(sizeof(int) * arr_len);
    memcpy(temp_arr, arr, sizeof(int) * arr_len);

    for(int i = 0; i < query_len; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = query[i]+ 1 + d_len; j < arr_len; j++)
            {
                temp_arr[j] = -1;
            }

        } else {
            for(int k = query[i] - 1 + d_len; k >= 0 ; k--)
            {
                if(temp_arr[k] == -1)
                {
                    break;
                }
                temp_arr[k] = -1;
                d_len++;
            }
        }
    }

    for(int i = 0; i < arr_len; i++)
    {
        if(temp_arr[i] != -1)
        {
            s_idx = i;
            break;
        }
    }

    for(int i = arr_len-1; i >= 0; i--)
    {
        if(temp_arr[i] != -1)
        {
            e_idx = i;
            break;
        }
    }

    int* answer = (int*)malloc(sizeof(int) * (e_idx - s_idx + 1));
    memcpy(answer, temp_arr + s_idx, sizeof(int) * (e_idx - s_idx + 1));

    return answer;

}
