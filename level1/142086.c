#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * strlen(s));

    for(int i = 0; i < strlen(s); i++)
    {
        int len = 0;
        bool ret = false;
        char* idx = NULL;
        idx = strchr(s + i, s[i]);
        if(idx)
        {
            for(int j = (idx - s) - 1; j >= 0; j--)
            {
                len++;

                if(s[j] == s[i])
                {
                    ret = true;
                    break;
                }
            }

            if(!ret)
            {
                answer[i] = -1;
            }
            else
            {
                answer[i] = len;
            }
        }
    }

    return answer;
}

