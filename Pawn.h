#pragma once
#include <iostream>
#include <string>
#include"Piece.h"
using namespace std;

class Pawn :public Piece {
private:
	int currRow, currCol, moveRow, moveCol;
public:
	void setPawn(int curr, int current, int move, int moved);
	bool validMovePawn(int curr, int current, int move, int moved);
	bool validTakePiece(int curr, int current, int move, int moved);
};