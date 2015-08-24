
#include "Board.h"

namespace c3131416_assignment2{

	Board::Board()
	{
		boardSize = 9;
		initialiseGameBoard();
	}

	void Board::initialiseGameBoard()
	{
		gameBoard = new string[boardSize];
		availableSpaces = new int[boardSize];
		for(int i=0;i<boardSize;i++)
		{
			gameBoard[i] = to_string(i + 1);
			availableSpaces[i] = (i + 1);	
		}
	} 

	Board::~Board()
	{
		delete[] gameBoard;
		delete[] availableSpaces;
	}

	string Board::printRow(int from, int to)
	{
		string row = "| ";
		for(int i=from; i <= to; i++)
		{
			row += gameBoard[i] + " ";
		}
		row += "|";
		return row;
	}

	string Board::makeMove(int move, string player)
	{
		if(is_number(gameBoard[move]))
		{
			gameBoard[move - 1] = player;
			availableSpaces[move - 1] = -1;
			return "success";
		}
		else
		{
			return "that space is taken";
		}
		
	}

	int* Board::getAvailableSpaces()
	{
		return availableSpaces;
	}
/*
	int Board::numFreeSpaces()
	{
		int num = 0;
		for(int i=0;i<boardSize;i++)
		{
			if(is_number(gameBoard[i])) num ++;
		}
		return num;
	}
*/
	bool Board::checkDraw()
	{
		int moveCounter = 0;
		for(int i=0;i<boardSize;i++)
		{
			if(!is_number(gameBoard[i]))
			{
				moveCounter ++;
			}
		}

		if(moveCounter == boardSize) return true;
		else return false;
	}

	bool Board::checkWin()
	{
		// horizontals
		if(checkLine(0, 1, 2)) return true;
		else if(checkLine(3, 4, 5)) return true;
		else if(checkLine(6, 7, 8)) return true;

		// verticals
		else if(checkLine(0, 3, 6)) return true;
		else if(checkLine(1, 4, 7)) return true;
		else if(checkLine(2, 5, 8)) return true;

		// diagonals
		else if(checkLine(0, 4, 8)) return true;
		else if(checkLine(2, 4, 6)) return true;

		// no win
		else return false;
	}

	bool Board::checkLine(int first, int second, int third)
	{
		if(gameBoard[first] == gameBoard[second] && gameBoard[second] == gameBoard[third]) return true;
		else return false;
	}

	bool Board::is_number(string str)
	{
		istringstream iss(str);
		int num = 0;

		if((iss >> num).fail()) return false;
		else return true;
	}

	string Board::to_string(int num)
	{
		stringstream ss;
		ss << num;
		return ss.str();
	}

	ostream& operator<<(ostream& out, Board& b)
	{
		//string board = b.getBoard();
		out << " -------" << endl;
		out << b.printRow(0, 2) << endl;
		out << b.printRow(3, 5) << endl;
		out << b.printRow(6, 8) << endl;
		out << " -------";
		return out;
	}
}