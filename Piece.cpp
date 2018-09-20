#include <iostream>
#include <string>
#include"Piece.h"
using namespace std;

Piece::Piece() {
	currspace1 = 0;
	currspace = 0;
	movespace1 = 0;
	movespace = 0;
}


void Piece::setPiece(int curr, int current, int move, int moved){
	currspace1 = curr;
	currspace = current;
	movespace1 = move;
	movespace = moved;
}

bool Piece::validMove() {
	if ((currspace == movespace) && (currspace1 == movespace1)) {
		return false;
	}
	else return true;
}

int Piece::getCurr(){
	return currspace;
}

int Piece::getCurr1(){
	return currspace1;
}

int Piece::getMove() {
	return movespace;
}

int Piece::getMove1(){
	return movespace1;
}