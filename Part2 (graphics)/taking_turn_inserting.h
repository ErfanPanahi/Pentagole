#include "graphics.h"
#include <stdio.h>
int taking_turn_inserting(int k, char board[6][6]) {
	int turn, color;
	if (k % 2 == 0) {//black's turn
		turn = 'b';
		setfillstyle(SOLID_FILL, 0);
		floodfill(120, 320, 9);
		setcolor(14);
		outtextxy(20, 340, "BLACK player's turn:");
		color = BLACK;
	}
	else {//white's turn
		turn = 'w';
		setfillstyle(SOLID_FILL, 0);
		floodfill(120, 320, 9);
		setcolor(14);
		outtextxy(20, 340, "WHITE player's turn:");
		color = WHITE;
	}
	int i = 0, j = 0;
	while (1) {//this loop is for invalid inputs
		int input1;
		setcolor(YELLOW);
		rectangle(j + 4, i + 4, j + 46, i + 46);//clear last position of marker
		input1 = getch();
		setcolor(BLUE);
		rectangle(j + 4, i + 4, j + 46, i + 46);//showing the marker
		if (input1 == 'a' && j != 0) {//left
			j -= 50;
		}
		if (input1 == 'd'&& j != 250) {//right
			j += 50;
		}
		if (input1 == 's'&& i != 250) {//up
			i += 50;
		}
		if (input1 == 'w'&& i != 0) {//down
			i -= 50;
		}
		if (input1 == 'f') {//filling the choosen place
			if (board[i / 50][j / 50] == '.') {
				board[i / 50][j / 50] = turn;
				setfillstyle(SOLID_FILL, color);
				floodfill(20 + j, 20 + i, 9);
				break;
			}
			else {//if the chosen place wasn't empty
				setcolor(4);
				outtextxy(20, 320, "It is not empty.");
				continue;
			}
		}
	}
	return board[6][6];
}