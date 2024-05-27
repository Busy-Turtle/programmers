#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* str1, const char* str2) {

    return strstr(str1, str2) ? 1 : 0;
}
