#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* today, const char* terms[], size_t terms_len, const char* privacies[], size_t privacies_len) {
    int temp_answer[100] = {0};
    int answer_idx = 0;

    char* today_copy = strdup(today);
    
    char* terms_copy[terms_len];
    for(int i = 0; i < terms_len; i++)
    {
        terms_copy[i] = strdup(terms[i]);
    }

    char* privacies_copy[privacies_len];
    for(int i = 0; i < privacies_len; i++)
    {
        privacies_copy[i] = strdup(privacies[i]);
    }

    int year, month, day;
    year = atoi(strtok(today_copy, "."));
    month = atoi(strtok(NULL, "."));
    day = atoi(strtok(NULL, "."));

    int p_year, p_month, p_day;
    char* policy = NULL;
    int term = 0;
    for (size_t i = 0; i < privacies_len; i++) {
        char* privacy_copy = strdup(privacies_copy[i]);
        int p_year = atoi(strtok(privacy_copy, "."));
        int p_month = atoi(strtok(NULL, "."));
        int p_day = atoi(strtok(NULL, " "));
        char* policy = strtok(NULL, " ");

        for (size_t j = 0; j < terms_len; j++) {
            char* term_copy = strdup(terms_copy[j]);
            char* terms_policy = strtok(term_copy, " ");
            int term = atoi(strtok(NULL, " "));

            if (strcmp(policy, terms_policy) == 0) {
                p_month += term;
                while (p_month > 12) {
                    p_year++;
                    p_month -= 12;
                }

                if ((year > p_year) || (year == p_year && month > p_month) || (year == p_year && month == p_month && day >= p_day)) {
                    temp_answer[answer_idx++] = i + 1;
                }
                free(term_copy);
                break;
            }
            free(term_copy);
        }
        free(privacy_copy);
    }
    
    free(today_copy);
    for(int i = 0; i < terms_len; i++) {
        free(terms_copy[i]);
    }
    for(int i = 0; i < privacies_len; i++) {
        free(privacies_copy[i]);
    }

    int* answer = (int*)malloc(sizeof(int) * answer_idx);
    for(int i = 0; i < answer_idx; i++)
    {
        answer[i] = temp_answer[i];
    }

    return answer;
}

