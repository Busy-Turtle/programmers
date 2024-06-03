#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
    bool answer = true;
    int s_len = strlen(s);
    if(s[0] == ')' || s[s_len - 1] == '(') 
    {
        return !answer;
    }

    int c_idx = 1;
    int rc_idx = 1;
    for(int i = 0; i < s_len; i++)
    {
        if(s[i] == '(') c_idx++;
        else rc_idx++;
        if(c_idx < rc_idx)
        {
            return !answer;
        }
    }
   	if(c_idx > rc_idx) return !answer;
	
    return answer;
}
