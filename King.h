#pragma once
#include <iostream>
#include <string>
#include"Piece.h"
using namespace std;

class King :public Piece {
private:
	int currRow, currCol, moveRow, moveCol;
public:
	void setKing(int curr, int current, int move, int moved);
	bool validMoveKing(int currRow, int currCol, int moveRow, int moveCol);
};