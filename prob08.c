#include "chess.h"
#include "figures.h"

void display(){
  char **fila[8];
  char **tablero;
  
  char **c2 = join(whiteSquare, reverse(whiteSquare));
  char **c3 = join(c2, whiteSquare);
  char **c4 = join(c3, reverse(whiteSquare));
  
  fila[0] = join(c4, superImpose(queen, whiteSquare));
  fila[0] = join(fila[0], reverse(c3));
  
  interpreter(fila[0]);
}
