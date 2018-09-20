#include <iostream>
#include <string>
#include"Piece.h"
#include"Queen.h"
using namespace std;

void Queen::setQueen(int curr, int current, int move, int moved) {
	currRow = curr;
	currCol = current;
	moveRow = move;
	moveCol = moved;
}

bool Queen::validMoveQueen(int currRow, int currCol, int moveRow, int moveCol) {
	Queen q;
	q.setPiece(currRow, currCol, moveRow, moveCol);
	if (q.validMove()) {
		return true;
	}
	else {
		return false;
	}
}