#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;  // 1 미만의 수는 소수가 아님
    }
    if (n <= 3) {
        return true;  // 2와 3은 소수
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;  // 2 또는 3으로 나누어 떨어지는 수는 소수가 아님
    }
    // 5 이상의 모든 소수는 6k ± 1의 형태를 가짐
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;  // 6k ± 1의 형태의 수로 나누어 떨어지는 수는 소수가 아님
        }
    }
    return true;  // 위의 모든 경우가 아니면 소수
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;

    for(int i = 0; i < nums_len-2; i++)
    {
        for(int j = i+1; j < nums_len-1; j++)
        {
            for(int k = j+1; k < nums_len; k++)
            {
                if(is_prime(nums[i] + nums[j] + nums[k]))
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}

