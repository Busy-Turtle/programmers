#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* wallpaper[], size_t wallpaper_len) {
	int* answer = (int*)malloc(sizeof(int) * 4);
	int lux, luy, rdx, rdy;

	for(int i = 0; i < strlen(wallpaper[0]); i++)
	{
		bool ret = false;
		for(int j = 0; j < wallpaper_len; j++)
		{
			if(wallpaper[j][i] == '#')
			{
				lux = i;
				ret = true;
				break;
			}
		}
		if(ret)
		{
			break;
		}
	}

	for(int i = 0; i < wallpaper_len; i++)
	{
		bool ret = false;
		for(int j = 0; j < strlen(wallpaper[0]); j++)
		{
			if(wallpaper[i][j] == '#')
			{
				luy = i;
				ret = true;
				break;
			}
		}
		if(ret)
		{
			break;
		}
	}	
	
	for(int i = strlen(wallpaper[0]) - 1; i >= 0; i--)
	{
		bool ret = false;
		for(int j = 0; j < wallpaper_len; j++)
		{
			if(wallpaper[j][i] == '#')
			{
				rdx = i + 1;
				ret = true;
				break;
			}
		}
		if(ret)
		{
			break;
		}
	}
 	
	for(int i = wallpaper_len - 1; i >= 0; i--)
	{
		bool ret = false;
		for(int j = 0; j < strlen(wallpaper[0]); j++)
		{
			if(wallpaper[i][j] == '#')
			{
				rdy = i + 1;
				ret = true;
				break;
			}
		}
		if(ret)
		{
			break;
		}
	}   

	answer[0] = lux;
	answer[1] = luy;
	answer[2] = rdx;
	answer[3] = rdy;

	return answer;
}
