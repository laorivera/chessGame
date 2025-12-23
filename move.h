#ifndef BOARD_H
#define BOARD_H

class Move {
private:
    Board boardCopy;
    
public:
    Move(Board b);
    void makeMove(int fromX, int fromY, int toX, int toY);
};


#endif