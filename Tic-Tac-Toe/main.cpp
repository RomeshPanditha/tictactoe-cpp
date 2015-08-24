#include <iostream>
#include <string>
#include "GTree.h"
#include "GTNode.h"
#include "Board.h"

using namespace std;
using c3131416_assignment2::GTree;
using c3131416_assignment2::GTNode;
using c3131416_assignment2::Board;



int main()
{
/*
	GTNode<int>* iNode = new GTNode<int>;

	GTNode<int>* iNode2 = new GTNode<int>;
	GTNode<int>* iNode3 = new GTNode<int>;
	int* myInt = new int(45);
	int* myInt2 = new int(53);
	//cout << *myInt;
	iNode->setData(myInt);
	iNode2->setData(myInt2);
	iNode3->setData(myInt);
	iNode->addChild(iNode2);
	iNode->addChild(iNode3);
	cout << *iNode2->getParent();	
*/
	Board* board = new Board;
	GTNode<Board>* bNode = new GTNode<Board>;
	bNode->setData(board);

	cout << bNode->getData();
/*

    Board board;
    cout << board << endl;
    int playerTurn;

    while((board.checkDraw()) || (!board.checkWin()))
    {
    	cout << "make your move!" << endl;
    	cin >> playerTurn;
    	board.makeMove(playerTurn, "X");

    	// make ai move

    	cout << board << std::endl;
    }
	*/
/*
    for(int i=1; i<=9;i++)
    {
    	board.makeMove(i, "X");
	    if(board.checkDraw()) cout << "draw" << endl;
	    else cout << "no win" << endl;
	    std::cout << board << std::endl;
    }
*/
    //delete iNode;
    //delete iNode2;
    //delete myInt;
    //	delete myInt2;
}


