#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void reverse_arr(char* arr, int len)
{
	for(int i = 0; i < len/2; i++)
	{
		char* temp;
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
}

char* solution(const char* a, const char* b) {
	char* answer = (char*)malloc(sizeof(char) * 100001);

	int plus = 0;
	int sum = 0;
	int answer_idx = 0;
	int a_len = strlen(a);
	int b_len = strlen(b);
	int l_count = (a_len > b_len) ? a_len : b_len;
	int s_count = (a_len < b_len) ? a_len : b_len;
	while(s_count > 0 || l_count > 0)
	{
		if((s_count > 0) && (a_len >= b_len))
		{
			sum = (a[l_count-1] - '0') + (b[s_count-1] - '0');
		}
		else if((s_count > 0) && (b_len >= a_len))
		{
			sum = (a[s_count-1] - '0') + (b[l_count-1] - '0');
		}
		else if((s_count <= 0) && (a_len > b_len))
		{
			sum = a[l_count-1] - '0';
		}
		else if((s_count <= 0) && (b_len > a_len))
		{
			sum = b[l_count-1] - '0';
		}

		if(sum + plus >= 10)
		{
			answer[answer_idx++] = (sum + plus - 10) + '0'; 
			plus = 1;
		}
		else
		{
			answer[answer_idx++] = (sum + plus) + '0';
			plus = 0;
		}

		s_count--;
		l_count--;
	}
	if(plus == 1)
	{
		answer[answer_idx++] = '1';
		answer[answer_idx] = '\0';
	}
	else
	{
		answer[answer_idx] = '\0';
	}

	reverse_arr(answer, answer_idx);

	return answer;
}
