#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    int board[8][8];
    void initBoard();
    
public:
    void setBoard();
    void pboardState();
    bool pTurn(bool turn);
};


#endif