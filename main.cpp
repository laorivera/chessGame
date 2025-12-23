#include <iostream>

enum Pieces{
  EMPTY = 10,
  W_PAWN = 11, 
  W_KNIGHT = 13, 
  W_BISHOP = 15,
  W_ROOK = 17,
  W_QUEEN = 19,
  W_KING = 21,
  B_PAWN = 12, 
  B_KNIGHT = 14, 
  B_BISHOP = 16, 
  B_ROOK = 18, 
  B_QUEEN = 20,
  B_KING = 22
};


class Board {

  private: 
    int board[8][8] = {{10}}; 

    void initBoard(){
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
    
  public: 
    //cBoard(){}; // constructor 

    void setBoard(){
        initBoard();
    };

    void pboardState(){
      for (int y = 0; y < 8; y++){
          for (int x = 0; x < 8; x++ ){
             std::cout << board[y][x] << " ";
             if(y == 0 && x == 7){std::cout << std::endl;};
             if(y == 1 && x == 7){std::cout << std::endl;};
             if(y == 2 && x == 7){std::cout << std::endl;};
             if(y == 3 && x == 7){std::cout << std::endl;};
             if(y == 4 && x == 7){std::cout << std::endl;};
             if(y == 5 && x == 7){std::cout << std::endl;};
             if(y == 6 && x == 7){std::cout << std::endl;};
          };
       };
       std::cout << std::endl;
    };
    bool pTurn(bool turn){return turn = !turn;};
};


int main(){
  
  Board chessBoard; 

  chessBoard.setBoard();

  chessBoard.pboardState();

  return 0;

}