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
	bab_example[0] = "aya";
	bab_example[1] = "ye";
	bab_example[2] = "ma";
	bab_example[3] = "woo";

#if 0
	bab_example[0] = strdup("aya");
	bab_example[1] = strdup("ye");
	bab_example[2] = strdup("woo");
	bab_example[3] = strdup("ma");
#endif

	for(int i = 0; i < babbling_len; i++)
	{
		char* temp_idx = NULL;
		int idx = 0;
		int touchstone = 0;
		int exam_idx = 0;
		bool ret = true;

		for(int j = 0; j < strlen(babbling[i]); j += idx)
		{	
			for(exam_idx = 0; exam_idx < 4; exam_idx++)
			{
				temp_idx = strstr(babbling[i] + j, bab_example[exam_idx]);
				if(temp_idx != NULL)
                {
                    break;
                }
			}
			if(temp_idx == NULL)
			{
				ret = false;
				break;
			}
			idx = strlen(bab_example[exam_idx]);
			
			if(touchstone != (temp_idx - babbling[i]))
			{
				ret = false;
				break;
			}

			touchstone += idx;
		} 

		if(ret)
		{
			answer++;
		}
	}

    return answer;
}
