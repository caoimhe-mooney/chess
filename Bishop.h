#pragma once
#include <iostream>
#include <string>
#include"Piece.h"
using namespace std;

class Bishop :public Piece {
private:
	int currRow, currCol, moveRow, moveCol;
public:
	void setBishop(int curr, int current, int move, int moved);
	bool validMoveBishop(int currRow, int currCol, int moveRow, int moveCol);
};