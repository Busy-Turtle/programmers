#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int** solution(int** arr, size_t arr_rows, size_t arr_cols) {

	int** answer = (int**)malloc(sizeof(int*) * arr_rows);
	for(int i = 0; i < arr_rows; i++)
	{
		answer[i] = (int*)malloc(sizeof(int) * arr_cols);
		for(int j = 0; j < arr_cols; j++)
		{
			answer[i][j] = arr[i][j];
		}
	}

    if(arr_rows > arr_cols)
    {
        for(int i = 0; i < arr_rows; i++)
        {
            answer[i] = (int*)realloc(answer[i], sizeof(int) * arr_rows);

            for(int j = arr_cols; j < arr_rows; j++)
            {
                answer[i][j] = 0;
            }
        }
    }
    else if(arr_rows < arr_cols)
    {
        answer = (int**)realloc(answer, sizeof(int*) * arr_cols);

        for(int i = arr_rows; i < arr_cols; i++)
        {
			answer[i] = (int*)malloc(sizeof(int) * arr_cols);
            memset(answer[i], 0, sizeof(int) * arr_cols);
        }
    }

    return answer;
}
