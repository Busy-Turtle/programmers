#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;

    const char* bab[4] = {"aya", "ye", "woo", "ma"};

    for(int i = 0; i < babbling_len; i++) {
        bool ret = true;

        for(int j = 0; j < strlen(babbling[i]);) {
            bool match_found = false;

            for(int k = 0; k < 4; k++) {
                if (strncmp(&babbling[i][j], bab[k], strlen(bab[k])) == 0) {
                    match_found = true;

                    // 현재 위치에서 패턴을 찾았으므로, 이전 패턴과 비교합니다.
                    if (j != 0 && strncmp(&babbling[i][j - strlen(bab[k])], bab[k], strlen(bab[k])) == 0) {
                        ret = false;
                    }

                    j += strlen(bab[k]); // j를 패턴의 길이만큼 증가시킵니다.
                    break;
                }
            }

            // 현재 위치에서 패턴을 찾지 못한 경우
            if (!match_found) {
                ret = false;
                break;
            }
        }

        if (ret) {
            answer++;
        }
    }

    return answer;
}
