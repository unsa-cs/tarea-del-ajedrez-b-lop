#include "chess.h"
#include "figures.h"

void display(){
  // char** cblanco= repeatH(whiteSquare, 1);
  // = repeatH(whiteSquare, 8);
  // char** cnegro;

  char **base;

  base = join(whiteSquare,reverse(whiteSquare));
  /*
  for (int i = 0 ; i < 8 ; i++){
    if ( i % 2 == 0 ){
      cblanco =
    }
    else{
      cnegro  = repeatH(reverse(whiteSquare), 1);
    }    
  }
  */
  interpreter(base);
}
