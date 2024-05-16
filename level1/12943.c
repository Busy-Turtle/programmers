#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 1;
    long long n = num;
    
    if(num == 1)
    {
        return 0;
    }

    for(answer; answer <= 500; answer++)
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (n * 3) + 1;
        }

        if(n == 1)
        {
            break;
        }
    }
    
    return (answer == 501 && n != 1) ? -1 : answer;
}

