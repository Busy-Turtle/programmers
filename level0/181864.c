#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {

    int myString_len = strlen(myString);
    int pat_len = strlen(pat);
    
    char* str = (char*)malloc(sizeof(char)*myString_len+1);
    strcpy((const char*)str,myString);

    for(int i = 0; i < myString_len; i++)
    {
        str[i] = (myString[i] == 'A') ? 'B' : 'A';  
    }

    str[myString_len] = '\0';

    int answer = 0;

    for(int i = 0; i < myString_len - pat_len + 1; ++i)
    {
	
		char* substr = (char*)malloc(sizeof(char)*pat_len +1);
		memcpy((void*)substr, (const void*)&str[i], pat_len);
		substr[pat_len] = '\0';	

        if(!strcmp((const char*)substr,pat))     
        {
            answer = 1;
        }

		free(substr);
	}
    return answer;
}
