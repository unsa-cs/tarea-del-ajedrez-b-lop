#include "chess.h"
#include "figures.h"

void display(){
  char **base;
  char **fila;
  base = join(whiteSquare,reverse(whiteSquare));
  fila = repeatH(base, 4);
  interpreter(reverse(fila));
}
