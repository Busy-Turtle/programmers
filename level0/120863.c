#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* polynomial) {
    int str_len = strlen(polynomial);
    int x_num = 0;
    int constant_num = 0;

    if(polynomial[0] == 'x') {
                x_num += 1;
    } else { // when [0] is 'number'...
        if(polynomial[1] == 'x') {
            x_num += polynomial[0] - '0';
        } else if(polynomial[1] == ' ' || polynomial[1] == '\0') {
            constant_num += polynomial[0] - '0';
        } else { // when [1] is 'number'... 
            if(polynomial[2] == 'x') {
                x_num += (polynomial[0] - '0')*10 + (polynomial[1] - '0');
            } else {
                constant_num += (polynomial[0] - '0')*10 + (polynomial[1] - '0');
            }
          }
    }

for(int i = 0; i < str_len; i++) {

        if(polynomial[i] == ' ') {

            if(polynomial[i+1] == '+') {
                continue;
            } else if(polynomial[i+1] == 'x') {
                x_num += 1;
            } else { // when [i+1] is 'number'...
                if(polynomial[i+2] == 'x') {
                    x_num += polynomial[i+1] - '0';
                } else if(polynomial[i+2] == ' ' || polynomial[i+2] == '\0') {
                    constant_num += polynomial[i+1] - '0';
                } else { // when [i+2] is 'number'... 
                    if(polynomial[i+3] == 'x') {
                        x_num += (polynomial[i+1] - '0')*10 + (polynomial[i+2] - '0');
                    } else if(polynomial[i+3] == '\0' || polynomial[i+3] == ' ') {
                        constant_num += (polynomial[i+1] - '0')*10 + (polynomial[i+2] - '0');
                    }
                }
            }
        }
    }



    char x_num_str[10] = {0,};
    sprintf(x_num_str, "%d", x_num);
    int x_num_len = strlen(x_num_str);

    char constant_num_str[10] = {0,};
    sprintf(constant_num_str, "%d", constant_num);
    int constant_num_len = strlen(constant_num_str);

    char* answer;
    if(x_num>1 && constant_num!=0) {
        answer = (char*)malloc(sizeof(char) * (x_num_len + constant_num_len + 5));

        memcpy(answer,x_num_str,x_num_len);
        answer[x_num_len] = 'x';
        answer[x_num_len+1] = ' ';
        answer[x_num_len+2] = '+';
        answer[x_num_len+3] = ' ';
        memcpy(answer+x_num_len+4,constant_num_str,constant_num_len);
        answer[x_num_len + constant_num_len + 4] = '\0';
    } else if(x_num>1 && constant_num==0) {
        answer = (char*)malloc(sizeof(char) * (x_num_len + 2));

        memcpy(answer,x_num_str,x_num_len);
        answer[x_num_len] = 'x';
        answer[x_num_len + 1] = '\0';
    } else if (x_num==0 && constant_num!=0){
        answer = (char*)malloc(sizeof(char) * (constant_num_len + 1));

        memcpy(answer,constant_num_str,constant_num_len);
        answer[constant_num_len] = '\0';
    } else if(x_num==1 && constant_num!=0) {
		answer = (char*)malloc(sizeof(char) * (constant_num_len + 4));

		answer[0] = 'x';
		answer[1] = ' ';
		answer[2] = '+';
		answer[3] = ' ';
		memcpy(answer+4,constant_num_str,constant_num_len);
		answer[constant_num_len + 4] = '\0';
	} else if(x_num==1 && constant_num==0) {
		answer = (char*)malloc(sizeof(char) * 2);
		answer[0] = 'x';
		answer[1] = '\0';
	}

    return answer;

}
