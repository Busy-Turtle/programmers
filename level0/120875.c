#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

float division(int numerator, int denominator) {
    float upper = (float)numerator;
    float lower = (float)denominator;
    
    if (denominator == 0) {
        return 0.0;
    } else if(numerator == 0) {
        return 0.0;
    } else {
        return upper / lower;
    }
}

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {

    int answer = 0;
    float tolerance = 0.0001;
    float grad1 = 0.0;
    float grad2 = 0.0;
    
    grad1 = division((dots[0][1] - dots[1][1]) , (dots[0][0] - dots[1][0]));
    grad2 = division((dots[2][1] - dots[3][1]) , (dots[2][0] - dots[3][0]));

    if(fabs(grad1 - grad2) < tolerance)
    {
        answer = 1;
    }
    
    grad1 = division((dots[0][1] - dots[2][1]) , (dots[0][0] - dots[2][0]));
    grad2 = division((dots[1][1] - dots[3][1]) , (dots[1][0] - dots[3][0]));

    if(fabs(grad1 - grad2) < tolerance)
    {
        answer = 1;
    }
    
    grad1 = division((dots[0][1] - dots[3][1]) , (dots[0][0] - dots[3][0]));
    grad2 = division((dots[1][1] - dots[2][1]) , (dots[1][0] - dots[2][0]));
    
    if(fabs(grad1 - grad2) < tolerance)
    {
        answer = 1;
    }
    
    return answer;
}
