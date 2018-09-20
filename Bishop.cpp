#include <iostream>
#include <string>
#include"Piece.h"
#include"Bishop.h"
using namespace std;

void Bishop::setBishop(int curr, int current, int move, int moved) {
	currRow = curr;
	currCol = current;
	moveRow = move;
	moveCol = moved;
}

bool Bishop::validMoveBishop(int currRow, int currCol, int moveRow, int moveCol) {
	Bishop b;
	b.setPiece(currRow, currCol, moveRow, moveCol);
	if (b.validMove()) {
		if ((moveCol == currCol + 1) || (moveCol == currCol - 1) || (moveCol == currCol + 2) || (moveCol == currCol - 2) || (moveCol == currCol + 3) || (moveCol == currCol - 3) || (moveCol == currCol + 4) || (moveCol == currCol - 4) || (moveCol == currCol + 5) || (moveCol == currCol - 5) || (moveCol == currCol + 6) || (moveCol == currCol - 6) || (moveCol == currCol + 7) || (moveCol == currCol - 7) || (moveCol == currCol + 8) || (moveCol == currCol - 8)) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}