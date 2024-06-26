#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc((sizeof(char) * strlen(s)) + 1);

	int oddeven = 0;

    for(int i = 0; i < strlen(s); i++)
    {
		if(s[i] == ' ')
		{
			answer[i] = s[i];
			oddeven = 0;
		}
		else
		{
			if(oddeven%2 == 0 && s[i] >= 'a')
			{
				answer[i] = s[i] - 32;
				oddeven++;
			}
			else if(oddeven%2 == 0 && s[i] < 'a')
			{
				answer[i] = s[i];
				oddeven++;
			}
			else if(oddeven%2 == 1 && s[i] < 'a')
			{
				answer[i] = s[i] + 32;
				oddeven++;
			}
			else if(oddeven%2 == 1 && s[i] >= 'a')
			{
				answer[i] = s[i];
				oddeven++;
			}
		}
    }

	answer[strlen(s)] = '\0';

    return answer;
}
