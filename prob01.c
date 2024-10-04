#include "chess.h"
#include "figures.h"

void display(){
  char** cblanco;// = repeatH(whiteSquare, 8);
  for (int i = 0 ; i < 8 ; i++){
    if ( i % 2 == 0 ){
      cblanco = repeatH(whiteSquare, 1);
    }
    else{
      cblanco = repeatH(reverse(whiteSquare), 1);
    }    
  }
  interpreter(cblanco);
}
