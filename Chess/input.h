#ifndef INPUT_H
#define INPUT_H

#include "pieces.h"

class Input{

  private:

  public:
    coord inputMove();
    bool isValidInput(coord input);

};

#endif