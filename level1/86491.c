#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define max(a, b) ((a) >= (b) ? (a) : (b))
#define min(a, b) ((a) <= (b) ? (a) : (b))

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {

    int m = 0, n = 0;
    int maxi = 0, mini = 0;

    for(int i = 0; i < sizes_rows-1; i++)
    {
        m = max(sizes[i][0], sizes[i][1]);
        n = min(sizes[i][0], sizes[i][1]);
        
        if(m >= maxi)
        {
            maxi = m;
        }
        if(n >= mini)
        {
            mini = n;
        }
    }

    return maxi * mini;
}

