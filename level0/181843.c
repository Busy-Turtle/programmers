#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* my_string, const char* target) {
    return strstr(my_string, target) ? 1 : 0;
}
