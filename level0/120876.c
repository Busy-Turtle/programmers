#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int min(int a, int b) {
    return (a <= b) ? a : b;
}

int max(int a, int b) {
    return (a >= b) ? a : b;
}
int mid(int a, int b, int c) {
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        return a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        return b;
    } else {
        return c;
    }
}

// lines_rows는 2차원 배열 lines의 행 길이, lines_cols는 2차원 배열 lines의 열 길이입니다.
int solution(int** lines, size_t lines_rows, size_t lines_cols) {

    int answer = 0;

    int s = max(lines[0][0], lines[1][0]);
    int e = min(lines[0][1], lines[1][1]);
    answer += max(0, e - s);

    s = max(lines[0][0], lines[2][0]);
    e = min(lines[0][1], lines[2][1]);
    answer += max(0, e - s);

    s = max(lines[1][0], lines[2][0]);
    e = min(lines[1][1], lines[2][1]);
    answer += max(0, e - s);

    int s_mid = mid(lines[0][0],lines[1][0],lines[2][0]);
    int e_mid = mid(lines[0][1],lines[1][1],lines[2][1]);

    answer = min((e_mid - s_mid), answer);

    return answer;
}
