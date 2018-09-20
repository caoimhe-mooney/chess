#pragma once
#include <iostream>
#include <string>
#include"Piece.h"
using namespace std;

class Queen :public Piece {
private:
	int currRow, currCol, moveRow, moveCol;
public:
	void setQueen(int curr, int current, int move, int moved);
	bool validMoveQueen(int currRow, int currCol, int moveRow, int moveCol);
};