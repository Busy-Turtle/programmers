#include <stdio.h> 
#include <stdbool.h> 
#include <stdlib.h> 
 
long long fib_mod(int n) 
{ 
    long long prev = 1; 
    long long prevprev = 0; 
    long long fibonacci_mod = prev + prevprev; 
    for(int i = 1; i < n; i++) 
    { 
        fibonacci_mod = (prev + prevprev) % 1234567; 
        prevprev = prev; 
        prev = fibonacci_num; 
    } 
    return fibonacci_mod; 
} 
 
int solution(int n) { 
    return fib_mod(n + 1); 
}

