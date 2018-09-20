#include <iostream>
#include <string>
#include"Piece.h"
#include"Pawn.h"
using namespace std;

void Pawn::setPawn(int curr, int current, int move, int moved){
	currRow = curr;
	currCol = current;
	moveRow = move;
	moveCol = moved;
}


bool Pawn::validMovePawn(int curr, int current, int move, int moved) {
	Pawn p;
	p.setPiece(curr, current, move, moved);
	if (p.validMove()) {
		if ((move == curr + 1) && (current == moved)) {
			return true;
		}
		else if ((move == curr - 1) && (current == moved)) {
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
bool Pawn::validTakePiece(int curr, int current, int move, int moved) {
	Pawn p;
	p.setPiece(curr, current, move, moved);
	if (p.validMove()) {
		if ((move == curr + 1) && ((moved == current + 1) || (moved == current - 1)) || (move == curr - 1) && ((moved == current + 1) || (moved == current - 1))) {
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
