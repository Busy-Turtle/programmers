#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    
	char* substr = (char*)malloc((sizeof(char) * strlen(p)) + 1);

	for(int i = 0; i < strlen(t) - strlen(p) + 1; i++)
	{
		memset(substr, 0, strlen(p)+1);
		strncpy(substr, t + i, strlen(p));
		substr[strlen(p)] = '\0';

		if(strtoll(substr, NULL, 10) <= strtoll(p, NULL, 10))
		{
			answer++;
		}
	}

    return answer;
}
