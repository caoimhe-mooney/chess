#include <iostream>
#include <string>
#include <fstream>
#include"Piece.h"
#include"Pawn.h"
#include"Board.h"
#include"Rook.h"
#include"Knight.h"
#include"Bishop.h"
#include"Queen.h"
#include"King.h"
using namespace std;
int main() {
	Board b;
	b.printBoard();
	int curr, curr1, move, move1;
	string player;
	Pawn p;
	Rook r;
	Knight n;
	Bishop b1;
	Queen q;
	King k;
	
	fstream data;
	data.open("Text.txt", ios::out);

	cout << "Rules of Chess:" << endl << endl;
	cout << "-Pawn can only move one space and takes other pieces diagonally " << endl << "-Rook can move horizontal or vertical in a straight line" << endl << "-Knight moves in a Y shape" << endl << "-Bishop moves in a diagonal line" << endl << "-Queen can move any number of spaces in any direction" << endl << "-King only moves one space in any direction" << endl;
	cout << endl << "Game ends when the other players king is taken" << endl << endl;
	cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
	cin >> player;

	while (player != "end") {

		data << "Enter move (row first then column): ";
		cin >> curr >> curr1 >> move >> move1;

		if(player=="p1"){
			string x = b.getElement(curr, curr1);
			string y = b.getElement(move, move1);

			if (x == "p1") {
				if (p.validMovePawn(curr, curr1, move, move1)) {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "p1");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
				}
				else if (y == "K2") {
					if (p.validTakePiece(curr, curr1, move, move1)) {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						cout << "Not a valid move, enter new move" << endl;
						cin >> curr >> curr1 >> move >> move1;
					}
				}
				else if ((y == "p2") || (y == "R2") || (y == "N2") || (y == "B2") || (y == "Q2")) {
					if (p.validTakePiece(curr, curr1, move, move1)) {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "p1");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
					else {
						cout << "Not a valid move, enter new move" << endl;
						cin >> curr >> curr1 >> move >> move1;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}

			else if (x == "R1") {
				if (r.validMoveRook(curr, curr1, move, move1)) {
					if (y == "K2") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "R1");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}

			else if (x == "N1") {
				if (n.validMoveKnight(curr, curr1, move, move1)) {
					if (y == "K2") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "N1");
						b.printBoard(); 
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}
			else if (x == "B1") {
				if (b1.validMoveBishop(curr, curr1, move, move1)) {
					if (y == "K2") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "B1");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}
			else if (x == "Q1") {
				if (q.validMoveQueen(curr, curr1, move, move1)) {
					if (y == "K2") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "Q1");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}
			else if (x == "K") {
				if (k.validMoveKing(curr, curr1, move, move1)) {
					if (y == "K2") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "K1");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}
			else {
				cout << "space is empty, enter new piece" << endl;
				cout << "Enter move (row first then column): ";
				cin >> curr >> curr1 >> move >> move1;
			}

		}

		else {
			string x = b.getElement(curr, curr1);
			string y = b.getElement(move, move1);

			if (x == "p2") {
				if (p.validMovePawn(curr, curr1, move, move1)) {
					b.setElement(curr, curr1, "  ");
					b.setElement(move, move1, "p2");
					b.printBoard();
					cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
					cin >> player;
				}
				else if (y == "K1") {
					if (p.validTakePiece(curr, curr1, move, move1)) {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						cout << "Not a valid move, enter new move" << endl;
						cin >> curr >> curr1 >> move >> move1;
					}
				}
				else if ((y == "p1") || (y == "R1") || (y == "N1") || (y == "B1") || (y == "Q1")) {
					if (p.validTakePiece(curr, curr1, move, move1)) {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "p1");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
					else {
						cout << "Not a valid move, enter new move" << endl;
						cin >> curr >> curr1 >> move >> move1;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}

			else if (x == "R2") {
				if (r.validMoveRook(curr, curr1, move, move1)) {
					if (y == "K1") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "R2");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}

			else if (x == "N2") {
				if (n.validMoveKnight(curr, curr1, move, move1)) {
					if (y == "K1") {
						cout << "Check mate" << endl;
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "N1");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}
			else if (x == "B2") {
				if (b1.validMoveBishop(curr, curr1, move, move1)) {
					if (y == "K1") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "B2");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}
			else if (x == "Q2") {
				if (q.validMoveQueen(curr, curr1, move, move1)) {
					if (y == "K1") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "Q2");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}
			else if (x == "K2") {
				if (k.validMoveKing(curr, curr1, move, move1)) {
					if (y == "K1") {
						cout << "Check mate" << endl;
						player = "end";
					}
					else {
						b.setElement(curr, curr1, "  ");
						b.setElement(move, move1, "K2");
						b.printBoard();
						cout << "Enter which player is taking their turn (p1 or p2) or end to stop game:";
						cin >> player;
					}
				}
				else {
					cout << "Not a valid move, enter new move" << endl;
					cin >> curr >> curr1 >> move >> move1;
				}
			}
			else {
				cout << "space is empty, enter new piece" << endl;
				cout << "Enter move (row first then column): ";
				cin >> curr >> curr1 >> move >> move1;
			}
		}
	}
	cout << "you have ended the game" << endl;
}
