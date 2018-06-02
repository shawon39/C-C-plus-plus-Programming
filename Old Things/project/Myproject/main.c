#include <stdio.h>

#define N 4

void display(int board[N][N]);
bool solveNQ(int board[N][N], int col);
bool isSafePos(int board[N][N], int row, int col);

void display(int board[N][N]) {
	int r, c;
	for(r = 0; r < N; r++) {
		for(c = 0; c < N; c++) {
			printf("%d ", board[r][c]);
		}
		printf("\n");
	}
}

bool solveNQ(int board[N][N], int col) {
	int i;

	if(col >= N) {
		return true;
	}

	for(i = 0; i < N; i++) {

		if(isSafePos(board, i, col) == true) {

			board[i][col] = 1;

			if(solveNQ(board, col+1) == true) {
				return true;
			}
			board[i][col] = 0;
		}
	}

	return false;
}

bool isSafePos(int board[N][N], int row, int col) {
	int r, c;

	for(c = 0; c < col; c++) {
		if(board[row][c] == 1) {
			return false;
		}
	}


	for(r = row, c = col; r >= 0 && c >= 0; r--, c--) {
		if(board[r][c] == 1) {
			return false;
		}
	}

	for (r = row, c = col; c >= 0 && r < N; r++, c--) {
		if (board[r][c] == 1) {
			return false;
		}
	}

	return true;
}

int main(void) {

	int board[N][N] = {0};

	if(solveNQ(board, 0) == false) {
		printf("No solution!\n");
	} else {
		display(board);
	}

	return 0;
}
