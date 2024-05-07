#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
	
	int myString_len = strlen(myString);
	int pat_len = strlen(pat);

	char* str = (char*)malloc(sizeof(char)*myString_len+1);
	strcpy(str,myString);

	for(int i = 0; i < myString_len; i++)
	{
		str[i] = (str[i] == 'A') ? 'B' : 'A'; 
	}

	bool ret = false;
	for(int i = 0; i < myString_len - pat_len; ++i)
	{
		char* substr = (char*)malloc(sizeof(char)*pat_len);
		memcpy(substr,str[i],sizeof(pat_len);
						
	}

	int answer = 0;
	return answer;
}
