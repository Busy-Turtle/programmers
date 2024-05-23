#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* players[], size_t players_len, const char* callings[], size_t callings_len) {
    
    char* players_copy[players_len];
    for(int i = 0; i < players_len; i++)
    {   
        players_copy[i] = strdup(players[i]);
    }
    
    for(int i = 0; i < callings_len; i++)
    {
        for(int j = 1; j < players_len; j++)
        {
            if(strcmp(callings[i], players_copy[j]) == 0)
            {
                char* temp = NULL;
                temp = players_copy[j];
                players_copy[j] = players_copy[j-1];
                players_copy[j-1] = temp;
                
                break;
            }
        }
    }
    
    return players_copy;
}
