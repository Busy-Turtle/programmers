#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

	int str_len = 0;
	str_len = strlen(myString);

    char* answer = (char*)malloc(sizeof(char) * str_len + 1);
    answer[str_len] = '\0';

	for(int i = 0; i < str_len; i++)
	{
		if(myString[i] < 'l')
		{
			answer[i] = 'l';
		}		
		else 
		{
			answer[i] = myString[i];
		}
	}

    return answer;
}
