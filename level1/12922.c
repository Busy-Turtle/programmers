#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char* solution(int n) {
    setlocale(LC_ALL, ""); // 로케일 설정
    // "수"와 "박"의 UTF-8 인코딩 문자열
    const char* su = "수";
    const char* bak = "박";
    
    // UTF-8로 "수"와 "박" 각각 3바이트
    int su_len = strlen(su); // 3
    int bak_len = strlen(bak); // 3

    // n개의 "수박수박..."을 저장할 공간 할당 (3 * n + 1)
    char* answer = (char*)malloc((su_len * (n + 1)) + 1);
    
    if (answer == NULL) {
        // 메모리 할당 실패 시 NULL 반환
        return NULL;
    }

    answer[0] = '\0'; // 문자열 시작을 위해 널 문자로 초기화

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            strcat(answer, su);
        } else {
            strcat(answer, bak);
        }
    }

    return answer;
}
