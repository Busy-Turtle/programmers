#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    char* answer = (char*)malloc(sizeof(char) * 5);

    int score_arr[4][2][1] = {0};
    int flag = 0;
    int score = 0;

    for(int i = 0; i < survey_len; i++)
    {
        switch(survey[i][0])
        {
            case 'R':
            case 'T':
                flag = 0;
                break;
            case 'C':
            case 'F':
                flag = 1;
                break;
            case 'J':
            case 'M':
                flag = 2;
                break;
            case 'A':
            case 'N':
                flag = 3;
                break;
        }

        if(survey[i][0] < survey[i][1])
        {
			if(choices[i] <= 4)
			{
            	score_arr[flag][0][0] += 4 - choices[i];
			} 
			else
			{
				score_arr[flag][1][0] += (choices[i] - 4);
			}
        }
		else
		{
			if(choices[i] <= 4)
			{
				score_arr[flag][1][0] += 4 - choices[i];
			}
			else
			{
				score_arr[flag][0][0] += (choices[i] - 4);
			}
		}
    }

    answer[0] = (score_arr[0][0][0] >= score_arr[0][1][0]) ? 'R' : 'T';
    answer[1] = (score_arr[1][0][0] >= score_arr[1][1][0]) ? 'C' : 'F';
    answer[2] = (score_arr[2][0][0] >= score_arr[2][1][0]) ? 'J' : 'M';
    answer[3] = (score_arr[3][0][0] >= score_arr[3][1][0]) ? 'A' : 'N';
    answer[4] = '\0';

    return answer;
}

