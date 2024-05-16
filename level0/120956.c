#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {

    int answer = 0;

    char** bab_example = (char**)malloc(sizeof(char*) * 4);
    for(int i = 0; i < 4; i++)
    {
        bab_example[i] = (char*)malloc(sizeof(char) * 4);
    }
    strcpy(bab_example[0], "aya");
    strcpy(bab_example[1], "ye");
    strcpy(bab_example[2], "ma");
    strcpy(bab_example[3], "woo");

    for(int i = 0; i < babbling_len; i++)
    {
        char* temp_idx = NULL; 
        int idx = 0;
        int exam_idx = 0;
        bool ret = true;

        for(int j = 0; j < strlen(babbling[i]); j += idx)
        {   
            for(exam_idx = 0; exam_idx < 4; exam_idx++)
            {
				bool right = false;
                temp_idx = strstr(babbling[i] + j, bab_example[exam_idx]);
                if(temp_idx == babbling[i] + j)
                {   
                    idx = strlen(bab_example[exam_idx]);
                    right = true;
                    break;
                }
            }
			if(!right)
			{
				ret = false;
				break;
			}
        }

        if(ret)
        {
            answer++;
        }
    }

    return answer;
}

