#include <iostream>
#include <string>
#include"Piece.h"
#include"Knight.h"
using namespace std;

void Knight::setKnight(int curr, int current, int move, int moved) {
	currRow = curr;
	currCol = current;
	moveRow = move;
	moveCol = moved;
}

bool Knight::validMoveKnight(int currRow, int currCol, int moveRow, int moveCol) {
	Knight k;
	k.setPiece(currRow, currCol, moveRow, moveCol);
	if (k.validMove()) {
		if ((moveRow == currRow + 2) && (moveCol == currCol + 1)) {
			return true;
		}
		else if ((moveRow == currRow - 2) && ((moveCol == currCol + 1) || (moveCol == currCol - 1))) {
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