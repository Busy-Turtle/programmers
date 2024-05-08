#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(my_string) + 1);
    strcpy(answer,my_string);

	for(int i = 0; i < queries_rows; ++i)
	{
		int s = queries[i][0];
		int e = queries[i][1];
		int temp_len = e - s + 1;

		for(int j = 0; j < (temp_len / 2); j++)
		{
			char temp;
			temp = answer[s+j];
			answer[s+j] = answer[e-j];
			answer[e-j] = temp;
		}	
	}

    return answer;
}
