#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define min(a,b) ((a) <= (b) ? (a) : (b))

int* solution(const char* keymap[], size_t keymap_len, const char* targets[], size_t targets_len) {
    int* answer = (int*)malloc(sizeof(int) * targets_len);

    int map[26];
	memset(map, -1, sizeof(int) * 26);	

    for(int i = 0; i < targets_len; i++)
    {
        for(int j = 0; j < strlen(targets[i]); j++)
        {
            for(int k = 0; k < keymap_len; k++)
            {
                char* idx = NULL;
                idx = strchr(keymap[k], targets[i][j]);
                if(idx != NULL)
                {
                    map[targets[i][j] - 'A'] = min(map[targets[i][j] - 'A'], idx - keymap[k]);
                }
            }
        }
    }

    for(int i = 0; i < targets_len; i++)
    {
        for(int j = 0; j < strlen(targets[i]); j++)
        {
			if(map[targets[i][j] - 'A'] != -1)
			{
				answer[i] += map[targets[i][j] - 'A'];
			}
			else
			{
				answer[i] = -1;
				break;
			}
        }
    }

    return answer;
}

