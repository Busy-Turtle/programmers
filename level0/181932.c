#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* code) {
  
	int mode = 0;
	int idx = 0;
	int add_num = 0;

    char* ret = (char*)malloc(sizeof(char) * 100000);

	for(idx; idx < strlen(code); idx++)
	{
		if(mode == 0)
	    {
			if(code[idx] != '1' && (idx % 2 == 0))
			{	
				char temp[2];
				temp[0] = code[idx];
				temp[1] = '\0';
				strcat(ret,temp);
				add_num++;	
			} else if(code[idx] == '1') {
				mode = 1;
			}
		} else {
			if(code[idx] != '1' && (idx % 2 == 1))
			{	
				char temp[2];
				temp[0] = code[idx];
				temp[1] = '\0';
				strcat(ret,temp);
				add_num++;	
			} else if(code[idx] == '1') {
				mode = 0;
			}
		}
	}
	
	if(add_num == 0)
	{
		strcat(ret,"EMPTY");
	}

    return ret;
}
