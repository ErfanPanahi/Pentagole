#include "graphics.h"
#include <stdio.h>
int printing_board(char board[6][6]) {
	setcolor(9);
	rectangle(2, 2, 298, 298);
	setfillstyle(SOLID_FILL, 1);//painting the board
	floodfill(150, 150, 9);
	setcolor(9);
	rectangle(0, 300, 300, 400);
	line(150, 2, 150, 298);//painting the background of writing
	line(2, 150, 298, 150);
	int i, j;
	for (i = 0; i < 6; i++)//showing the empty circles
		for (j = 0; j < 6; j++)
			circle(25 + j * 50, 25 + i * 50, 20);
	for (i = 0; i<6; i++)//first value for array
		for (j = 0; j < 6; j++)
			board[i][j] = '.';
	return board[6][6];
}