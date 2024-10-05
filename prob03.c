#include "chess.h"
#include "figures.h"

void display(){
  char **base_c;
  char **fila;
  char **base_f;
  char **forma;
  base_c = join(whiteSquare,reverse(whiteSquare));
  fila = repeatH(base_c, 4);
  base_f = up(reverse(fila), fila); 
  forma = repeatV(base_f, 2);
  interpreter(forma);
}
