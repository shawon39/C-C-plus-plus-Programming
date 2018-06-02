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
	/*
		if all the queens are placed then
		the board is solved
	 */
	if(col >= N) {
		return true;
	}

	/*
		for the given column col
		try placing the queen in all the
		rows one by one to see if its
		possible to place a queen in the
		given column without dispute
	 */
	for(i = 0; i < N; i++) {
		/*
			check if queen can be placed
			in cell board[i][col]
		 */
		if(isSafePos(board, i, col) == true) {
			/*
				the position is safe
				so, we place a queen in the
				cell board[i][col]
			 */
			board[i][col] = 1;

			/*
				now recursively place rest of
				the queen
			 */
			if(solveNQ(board, col+1) == true) {
				return true;
			}

			/*
				if the queen is placed in cell
				board[i][col] and it does not
				leads to a solution then we reset
				the cell i.e., backtrack
			 */
			board[i][col] = 0;
		}
	}

	/*
		if queen can&apost be placed in any row
		for the given column col then there is
		no solution
	 */
	return false;
}

bool isSafePos(int board[N][N], int row, int col) {
	int r, c;

	/*
		this function will check if the position is safe
		for the queen.

		we need to check the rows and the diagonals
	 */


	/*
		if there is a queen in the given row
		then it is not a safe position
	 */
	for(c = 0; c < col; c++) {
		if(board[row][c] == 1) {
			return false;
		}
	}

	/*
		check upper diagonal
	 */
	for(r = row, c = col; r >= 0 && c >= 0; r--, c--) {
		if(board[r][c] == 1) {
			return false;
		}
	}

	/*
		check lower diagonal
	 */
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
