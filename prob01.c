#include "chess.h"
#include "figures.h"

void display(){
  char** cblanco = repeatH(whiteSquare);
  interpreter(cblanco);
}
