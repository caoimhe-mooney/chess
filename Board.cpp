#include <iostream>
#include <string>
#include <fstream>
#include"Board.h"
using namespace std;

Board::Board() {
	for (int i = 2; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = "  ";
		}
	}


	for (int j = 0; j < 8; j++) {
			board[1][j] = "p1";
	}



	for (int j = 0; j < 8; j++) {
			board[6][j] = "p2";
	}


	board[0][0] = "R1";
	board[0][1] = "N1";
	board[0][2] = "B1";
	board[0][3] = "Q1";
	board[0][4] = "K1";
	board[0][5] = "B1";
	board[0][6] = "N1";
	board[0][7] = "R1";

	board[7][0] = "R2";
	board[7][1] = "N2";
	board[7][2] = "B2";
	board[7][4] = "K2";
	board[7][3] = "Q2";
	board[7][5] = "B2";
	board[7][6] = "N2";
	board[7][7] = "R2";
}

void Board::printBoard() {

	fstream dataFile;
	dataFile.open("Board output.txt", ios::out);

	dataFile << "    0    1    2    3    4    5    6    7" << endl;
	dataFile << " -------------------------------------------" << endl;
	int i = 0;
	int x = 0;

	while (i < 8) {
		dataFile << " | ";
		for (int j = 0; j < 8; j++) {
			dataFile << board[i][j] << " | ";
		}
		dataFile << x << endl;
		dataFile << " -------------------------------------------" << endl;
		i++;
		x++;
	}
}

string Board::getElement(int arrayNumA, int arrayNumB) {
	return board[arrayNumA][arrayNumB];
}

void Board::setElement(int arrayNumA, int arrayNumB, string piece) {
	board[arrayNumA][arrayNumB] = piece;
}