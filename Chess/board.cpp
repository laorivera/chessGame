#include <iostream>
#include "board.h"

   const int board[8][8] = {{10}}; 

    void Board::  initBoard(){
       board[0][0] = W_ROOK;
       board[0][1] = W_KNIGHT;
       board[0][2] = W_BISHOP;
       board[0][3] = W_QUEEN;
       board[0][4] = W_KING;
       board[0][5] = W_BISHOP;
       board[0][6] = W_KNIGHT;
       board[0][7] = W_ROOK;
       board[1][0] = W_PAWN;
       board[1][1] = W_PAWN;
       board[1][2] = W_PAWN;
       board[1][3] = W_PAWN;
       board[1][4] = W_PAWN;
       board[1][5] = W_PAWN;
       board[1][6] = W_PAWN;
       board[1][7] = W_PAWN;
       board[7][0] = B_ROOK;
       board[7][1] = B_KNIGHT;
       board[7][2] = B_BISHOP;
       board[7][3] = B_QUEEN;
       board[7][4] = B_KING;
       board[7][5] = B_BISHOP;
       board[7][6] = B_KNIGHT;
       board[7][7] = B_ROOK;
       board[6][0] = B_PAWN;
       board[6][1] = B_PAWN;
       board[6][2] = B_PAWN;
       board[6][3] = B_PAWN;
       board[6][4] = B_PAWN;
       board[6][5] = B_PAWN;
       board[6][6] = B_PAWN;
       board[6][7] = B_PAWN;
       
       for (int y = 2; y < 6; y++){
          for (int x = 0; x < 8; x++ ){
            board[y][x] = EMPTY;  
          }
        };

    };
    
    //cBoard(){}; // constructor 

    void Board::setBoard(){
        initBoard();
    };

    void Board::pboardState(){
      for (int y = 0; y < 8; y++){
          for (int x = 0; x < 8; x++ ){
             std::cout << board[y][x] << " ";
             if(y == 0 && x == 7){std::cout << " 1"<< std::endl;};
             if(y == 1 && x == 7){std::cout << " 2"<< std::endl;};
             if(y == 2 && x == 7){std::cout << " 3"<< std::endl;};
             if(y == 3 && x == 7){std::cout << " 4"<< std::endl;};
             if(y == 4 && x == 7){std::cout << " 5"<< std::endl;};
             if(y == 5 && x == 7){std::cout << " 6"<< std::endl;};
             if(y == 6 && x == 7){std::cout << " 7"<< std::endl;};
             if(y == 7 && x == 7){std::cout << " 8";};
          };
       };
       std::cout << '\n' << " A  B  C  D  E  F  G  H" << std::endl;
    };

    bool Board::pTurn(bool turn){return turn = !turn;};

