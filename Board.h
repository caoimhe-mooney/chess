#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Board {
private:
	string board[8][8];
public:
	Board();
	void printBoard();
	string getElement(int arrayNumA, int arrayNumB);
	void setElement(int arrayNumA, int arrayNumB, string piece);
};