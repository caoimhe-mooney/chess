#include <iostream>
#include <string>
#include"Piece.h"
#include"Rook.h"
using namespace std;

void Rook::setRook(int curr, int current, int move, int moved) {
	currRow = curr;
	currCol = current;
	moveRow = move;
	moveCol = moved;
}

bool Rook::validMoveRook(int curr, int current, int move, int moved) {
	Rook r;
	r.setPiece(curr, current, move, moved);
	if (r.validMove()) {
		if ((curr == move) && (current != moved)) {
			return true;
		}
		else if ((current == moved) && (curr != move)) {
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