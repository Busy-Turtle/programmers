#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s, const char* skip, int index) {
    char* answer = (char*)malloc(sizeof(char) * strlen(s) + 1);

	int skiped_len = 26 - strlen(skip);
	char* skiped = (char*)malloc(sizeof(char) * skiped_len);
    char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	int idx = 0;
	for(int i = 0; i < 26; i++)
	{
		bool ret = true;
		for(int j = 0; j < strlen(skip); j++)
		{
			if(alphabet[i] == skip[j])
			{
				ret = false;
			}
		}
		if(ret == true)
		{
			skiped[idx++] = alphabet[i];
		}	
	}	

	int skiped_index = 0;
	for(int i = 0; i < strlen(s); i++)
	{	
		skiped_index = (strchr(skiped, s[i]) - skiped) + index;
		if(skiped_index >= skiped_len) 
		{
			skiped_index %= skiped_len;
		}

		answer[i] = skiped[skiped_index];
	}
	
	answer[strlen(s)] = '\0';

    return answer;
}
