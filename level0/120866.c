#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// board_rows는 2차원 배열 board의 행 길이, board_cols는 2차원 배열 board의 열 길이입니다.
int solution(int** board, size_t board_rows, size_t board_cols) {

	int safe_room = 0;

	for(int i = 0; i < board_rows; i++)
	{
		for(int j = 0; j < board_cols; j++)
		{
			if(board[i][j] == 1) 
			{
				if((j != 0) && (board[i][j-1] != 1)) // bomb's own line
					board[i][j-1] = -1;
				if((j != board_cols-1) && (board[i][j+1] != 1))
					board[i][j+1] = -1;	
				
				if(i != 0) {
					if((j != 0) && (board[i-1][j-1] != 1)) // bomb's upper line
						board[i-1][j-1] = -1;
					if((board[i-1][j] != 1))
						board[i-1][j] = -1;
					if((j != board_cols-1) && (board[i-1][j+1] != 1))
						board[i-1][j+1] = -1;
				}

				if(i != board_rows-1) {
					if((j !=0) && (board[i+1][j-1] != 1)) // bomb's under line
						board[i+1][j-1] = -1;
					if((board[i+1][j] != 1))
						board[i+2][j] = -1;
					if((j != board_cols-1) && (board[i+1][j+1] != 1))
						board[i+1][j+1] = -1;
				}
			}
		}
	}

	for(int i = 0; i < board_rows; i++)
	{
		for(int j = 0; j <board_cols; j++)
		{
			if(board[i][j] == 0)
			{
				safe_room++;
			}
		}
	}
    return safe_room;
}
