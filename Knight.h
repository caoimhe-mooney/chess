#pragma once
#include <iostream>
#include <string>
#include"Piece.h"
using namespace std;

class Knight :public Piece {
private:
	int currRow, currCol, moveRow, moveCol;
public:
	void setKnight(int curr, int current, int move, int moved);
	bool validMoveKnight(int curr, int current, int move, int moved);
};