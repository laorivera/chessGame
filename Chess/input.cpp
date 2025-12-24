#include <iostream>

#include "pieces.h"

coord inputMove(coord input){

  std::cout << "Enter Column Coordinates Piece to Move A, B ... " << '\n';
  std::cin >> input.fromx;
  std::cout << "Enter Row Coordinates Piece to Move 1, 2 ..." << '\n';
  std::cin >> input.fromy;
  std::cout << "Enter Column to move to A, B ... " << '\n';
  std::cin >> input.tox;
  std::cout << "Enter Row to move to 1, 2 ..." << '\n';
  std::cin >> input.toy;

  return input;

};

bool isValidInput(coord input){

  char columns[8] = {'A','B','C','D','E','F','G','H'};
  
  bool validfrom = false;
  bool validto = false;
  bool validrow = false; // is input valid bool

  for(int i = 0; i < 8; i++ ){
      if(input.fromx == columns[i]){  
          validfrom = true;}
      if (input.tox == columns[i]){
          validto = true;}
    };
  
  for(int i = 0; i < 8; i++){
      if((input.fromy >= 1 && input.fromy <= 8)&&(input.toy >= 1  && input.toy <= 8)){
          validrow = true;}
     };
  
  if(validfrom == true && validto == true && validrow == true){
    return true;
  }

  return false;

};