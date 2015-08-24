#ifndef MESH_BOARD
#define MESH_BOARD

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

namespace c3131416_assignment2{
	class Board
	{
	public:
		//Constructors
		Board();
		//Destructor
		~Board();
		//Mutator

		string makeMove(int, string);

		//Query
		string getBoard();

		int* getAvailableSpaces();

		bool checkWin();

		bool checkDraw();

		friend ostream& operator<<(ostream& out, Board& b);


	private:
		// variables
		int boardSize;
		string*	 gameBoard;
		int* availableSpaces;


		// functions
		string printRow(int from, int to);
			
		void initialiseGameBoard();

		//int numFreeSpaces();

		string to_string(int);

		bool is_number(string);

		bool checkLine(int, int, int);


	};
ostream& operator<<(ostream& out, Board& b);
}
#endif