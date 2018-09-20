#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Piece {
private:
	int currspace;
	int currspace1;
	int movespace;
	int movespace1;
public:
	Piece();
	void setPiece(int curr, int current, int move, int moved);
	bool validMove();
	int getCurr();
	int getCurr1();
	int getMove();
	int getMove1();

};


