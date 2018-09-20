#pragma once
#include <iostream>
#include <string>
#include"Piece.h"
using namespace std;

class Rook :public Piece {
private:
	int currRow, currCol, moveRow, moveCol;
public:
	void setRook(int curr, int current, int move, int moved);
	bool validMoveRook(int curr, int current, int move, int moved);
};