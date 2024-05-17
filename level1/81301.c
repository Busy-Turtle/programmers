#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;

    const char* number_name[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    char origin_num[50 + 1];
    int origin_num_idx = 0;

    for(int i = 0; i < strlen(s);)
    {
        if(isdigit(s[i]))
        {
            origin_num[origin_num_idx++] = s[i];
            i++;
        }
        else
        {
            for(int j = 0; j < 10; j++)
            {
                if((strncmp(s + i, number_name[j], strlen(number_name[j])) == 0))
                {
                    origin_num[origin_num_idx++] = j + 48;
                    i += strlen(number_name[j]);
                    break;
                }
            }
        }
    }

    origin_num[origin_num_idx] = '\0';

    return atoi(origin_num);
}


