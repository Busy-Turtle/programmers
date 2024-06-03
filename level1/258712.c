#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* friends[], size_t friends_len, const char* gifts[], size_t gifts_len) {
    
    int** key_map = (int**)malloc(sizeof(int*) * friends_len);
    for(int i = 0; i < friends_len; i++)
    {
        key_map[i] = (int*)malloc(sizeof(int) * friends_len);
        memset(key_map[i], 0, sizeof(int) * friends_len);
    }
    
    char* temp_str = (char*)malloc(sizeof(char) * 21);
    char* g_friend = NULL;
    char* r_friend = NULL;
    int g_friend_idx = 0;
    int r_friend_idx = 0;
    for(int i = 0; i < gifts_len; i++)
    {
        strcpy(temp_str, gifts[i]);
        g_friend = strtok(temp_str, " ");
        r_friend = strtok(NULL, " ");
        
        for(int j = 0 ; j < friends_len; j++)
        {
            if(strcmp(g_friend, friends[j]) == 0) g_friend_idx = j;
            if(strcmp(r_friend, friends[j]) == 0) r_friend_idx = j;
        }

        key_map[g_friend_idx][r_friend_idx] += 1;
    }

    int* gift_arr = (int*)malloc(sizeof(int) * friends_len);
    memset(gift_arr, 0, sizeof(int) * friends_len);

    for(int i = 0; i < friends_len; i++)
    {
        for(int j = i; j < friends_len; j++)
        {
            if(key_map[i][j] > 0 || key_map[j][i] > 0)
            {
                if(key_map[i][j] > key_map[j][i]) 
                {
                    gift_arr[i] += 1;
                }
                else if(key_map[i][j] < key_map[j][i])
                {
                    gift_arr[j] += 1;
                }
                else
                {
                    int gift_point_g = 0;
                    int gift_point_r = 0;
                    for(int k = 0; k < friends_len; k++)
                    {
                        gift_point_g += key_map[i][k] - key_map[k][i];
                        gift_point_r += key_map[j][k] - key_map[k][j];
                    }
                    if(gift_point_g > gift_point_r) gift_arr[i] += 1;
                    else if(gift_point_g < gift_point_r) gift_arr[j] += 1;
                    else continue;
                }
            }
			else 
			{
				int gift_point_g = 0;
				int gift_point_r = 0;
				for(int k = 0; k < friends_len; k++)
				{
                	gift_point_g += key_map[i][k] - key_map[k][i];
                    gift_point_r += key_map[j][k] - key_map[k][j];
                }
                if(gift_point_g > gift_point_r) gift_arr[i] += 1;
                else if(gift_point_g < gift_point_r) gift_arr[j] += 1;
                else continue;
			}
        }
    }

    int answer = 0;
    for(int i = 0; i < friends_len; i++)
    {
        if(answer < gift_arr[i]) answer = gift_arr[i];
    }
	
	free(temp_arr);
    free(gift_arr);
    for(int i = 0; i < friends_len; i++)
    {
        free(key_map[i]);
    }
    free(key_map);
    return answer;
}
