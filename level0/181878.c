#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void convert_lower(char* str, int len)
{
    for(int i = 0; i < len; i++)
    {
        if(str[i] < 'a') str[i] += 32;
    }
}

int solution(const char* myString, const char* pat) {
    int myString_len = strlen(myString);
    int pat_len = strlen(pat);
    
    char* copy_myString = (char*)malloc(sizeof(char) * myString_len + 1);
    char* copy_pat = (char*)malloc(sizeof(char) * pat_len + 1);
    strcpy(copy_myString, myString);
    strcpy(copy_pat, pat);
    
    convert_lower(copy_myString, myString_len);
    convert_lower(copy_pat, pat_len);
    
    return strstr(copy_myString, copy_pat) ? 1 : 0;
}
