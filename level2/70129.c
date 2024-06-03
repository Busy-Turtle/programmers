#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* s) {
    int* answer = (int*)malloc(sizeof(int) * 2);
	int convert_cnt = 0;
	int burned_zero = 0;

	int s_len = strlen(s);
	char* copy_s = (char*)malloc(sizeof(char) * s_len + 1);
	strcpy(copy_s, s);

	while(strcmp(copy_s, "1") != 0)
	{
		s_len = strlen(copy_s);
		int len = 0;
		for(int i = 0; i < s_len; i++)
		{
			if(copy_s[i] == '1') len++;
			else burned_zero++;
		}
		
		int s_idx = 0;
		while(len > 1)
		{
			copy_s[s_idx++] = (len % 2) + '0';
			len /= 2;
		}
		copy_s[s_idx++] = '1';
		copy_s[s_idx] = '\0';
		copy_s = (char*)realloc(sizeof(char) * s_idx);

		for(int i = 0; i < s_idx / 2; i++)
		{
			char temp;
			temp = copy_s[i];
			copy_s[i] = copy_s[s_idx - 1 - i];
			copy_s[i_idx - 1 - i] = temp;
		}	

		convert_cnt++;
	}
	
	answer[0] = convert_cnt;
	answer[1] = burned_zero;	

    return answer;
}
