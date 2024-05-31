#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* park[], size_t park_len, const char* routes[], size_t routes_len) {

    int H = park_len;
    int W = strlen(park[0]);
    int* dog_point = (int*)malloc(sizeof(int) * 2);
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            if(park[i][j] == 'S')
            {
                dog_point[0] = i;
                dog_point[1] = j;
                break;
            }
        }
    }

    char route_copy[20];
    char* route = NULL;
    int distance = 0;
    for(int i = 0; i < routes_len; i++)
    {
        strcpy(route_copy, routes[i]);
        route = strtok(route_copy, " ");
        distance = atoi(strtok(NULL, " "));

        bool ret = true;
        switch(route[0])
        {
            case 'E':
                if((dog_point[1] + distance) >= W) break;
                for(int j = dog_point[1] + 1; j <= dog_point[1] + distance; j++)
                {
                    if(park[dog_point[0]][j] == 'X')
                    {
                        ret = false;
                        break;
                    }
                }
                if(!ret) break;
                dog_point[1] += distance;
                break;

            case 'W':
                if(dog_point[1] < distance) break;
                for(int j = dog_point[1] - 1; j >= dog_point[1] - distance; j--)
                {
                    if(park[dog_point[0]][j] == 'X') 
                    {
                        ret = false;
                        break;
                    }
                }
                if(!ret) break;
                dog_point[1] -= distance;
                break;

            case 'S':
                if((dog_point[0] + distance) >= H) break;
                for(int j = dog_point[0] + 1; j <= dog_point[0] + distance; j++)
                {
                    if(park[j][dog_point[1]] == 'X')
                    {
                        ret = false;
                        break;
                    }
                }
                if(!ret) break;
                dog_point[0] += distance;
                break;

            case 'N':
                if(dog_point[0] < distance) break;
                for(int j = dog_point[0] - 1; j >= dog_point[0] - distance; j--)
                {
                    if(park[j][dog_point[1]] == 'X')
                    {
                        ret = false;
                        break;
                    }
                }
                if(!ret) break;
                dog_point[0] -= distance;
                break;
        }
    }

    return dog_point;
}

