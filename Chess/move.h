#ifndef MOVE_H
#define MOVE_H

#include "board.h"

class Move {
private:
   Board boardCopy;
    
public:
    //Move(Board);
    void movePiece(int fromX, int fromY, int toX, int toY);
    void addBoard(Board b);
};

#endif