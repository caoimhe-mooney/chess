#include <iostream>
#include <string>
#include"Piece.h"
#include"King.h"
using namespace std;

void King::setKing(int curr, int current, int move, int moved) {
	currRow = curr;
	currCol = current;
	moveRow = move;
	moveCol = moved;
}

bool King::validMoveKing(int currRow, int currCol, int moveRow, int moveCol) {
	King k;
	k.setPiece(currRow, currCol, moveRow, moveCol);
	if (k.validMove()) {
		if (((moveRow == currRow + 1) && (moveCol == currCol)) || ((moveRow == currRow + 1) && (moveCol == currCol + 1)) || ((moveRow == currRow + 1) && (moveCol == currCol - 1)) || ((moveRow == currRow) && (moveCol == currCol + 1)) || ((moveRow == currRow) && (moveCol == currCol - 1)) || ((moveRow == currRow - 1) && (moveCol == currCol)) || ((moveRow == currRow - 1) && (moveCol == currCol + 1)) || ((moveRow == currRow - 1) && (moveCol == currCol - 1))) {
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