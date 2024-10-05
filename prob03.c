#include "chess.h"
#include "figures.h"

void display(){
  char **base;
  char **fila;
  char **forma;
  base = join(whiteSquare,reverse(whiteSquare));
  fila = repeatH(base, 4);
  forma = repeatV(fila, 4);
  interpreter(reverse(forma));
}
