#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;

	char first_char = s[0];
	int equals = 0;
    int idx = 0;	
	for(int i = 0; i < strlen(s);)
	{
		if(first_char == s[i])
		{
			equals++;
		}			
		
		i++;
		idx++;

		if( (idx%2 == 0) && (equals == idx/2) )
		{
			answer++;
			first_char = s[i];
			equals = 0;
			idx = 0;
		} 
		else if (i == strlen(s))
		{
			answer++;
		}
	}

    return answer;
 }
