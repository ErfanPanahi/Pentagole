#include <stdio.h>
char rotation(char board[6][6]) {
	int i, j, input2;
	char array[3][3], input3;//use an array to rotate elements
	while (1) {//this loop is for invalid inputs
		printf("choose a square to rotate : (1 - 4)\n");
		scanf("%d", &input2);
		getchar();
		if (input2 != 1 && input2 != 2 && input2 != 3 && input2 != 4) {//invalid input for number of chosen square
			printf("your input number is invalid.");
			continue;
		}
		break;
	}//end of while
	while (1) {//this loop is for invalid inputs
		printf("enter the direction to rotate:(+/-)\n");
		scanf(" %c", &input3);
		if (input3 == '+') {
			switch (input2) {
			case 2://changes when input2=2 and input3=+
				for (i = 0; i < 3; i++)
					for (j = 0; j < 3; j++)
						array[j][2 - i] = board[i][j];
				for (i = 0; i < 3; i++)
					for (j = 0; j < 3; j++)
						board[i][j] = array[i][j];
				break;
			case 1://changes when input2=1 and input3=+
				for (i = 0; i < 3; i++)
					for (j = 3; j < 6; j++)
						array[j - 3][2 - i] = board[i][j];
				for (i = 0; i < 3; i++)
					for (j = 3; j < 6; j++)
						board[i][j] = array[i][j - 3];
				break;
			case 3://changes when input2=3 and input3=+
				for (i = 3; i < 6; i++)
					for (j = 0; j < 3; j++)
						array[j][5 - i] = board[i][j];
				for (i = 3; i < 6; i++)
					for (j = 0; j < 3; j++)
						board[i][j] = array[i - 3][j];
				break;
			case 4://changes when input2=3 and input3=+
				for (i = 3; i < 6; i++)
					for (j = 3; j < 6; j++)
						array[j - 3][5 - i] = board[i][j];
				for (i = 3; i < 6; i++)
					for (j = 3; j < 6; j++)
						board[i][j] = array[i - 3][j - 3];
				break;
			}


		}
		else if (input3 == '-') {
			switch (input2) {
			case 2://changes when input2=2 and input3=-
				for (i = 0; i < 3; i++)
					for (j = 0; j < 3; j++)
						array[2 - j][i] = board[i][j];
				for (i = 0; i < 3; i++)
					for (j = 0; j < 3; j++)
						board[i][j] = array[i][j];
				break;
			case 1://changes when input2=1 and input3=-
				for (i = 0; i < 3; i++)
					for (j = 3; j < 6; j++)
						array[5 - j][i] = board[i][j];
				for (i = 0; i < 3; i++)
					for (j = 3; j < 6; j++)
						board[i][j] = array[i][j - 3];
				break;
			case 3://changes when input2=3 and input3=-
				for (i = 3; i < 6; i++)
					for (j = 0; j < 3; j++)
						array[2 - j][i - 3] = board[i][j];
				for (i = 3; i < 6; i++)
					for (j = 0; j < 3; j++)
						board[i][j] = array[i - 3][j];
				break;
			case 4://changes when input2=4 and input3=-
				for (i = 3; i < 6; i++)
					for (j = 3; j < 6; j++)
						array[5 - j][i - 3] = board[i][j];
				for (i = 3; i < 6; i++)
					for (j = 3; j < 6; j++)
						board[i][j] = array[i - 3][j - 3];
				break;
			}
		}
		else {//invalid input for direction of ratation
			printf("your input is invalid.");
			continue;
		}
		break;
	}
}
