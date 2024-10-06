#include "chess.h"
#include "figures.h"

void display(){
  char **cuadrante[4];
  char **fila[4];
  
  fila[0] = repeatH(reverse(whiteSquare), 4);
  fila[1] = join(reverse(whiteSquare),repeatH(whiteSquare, 3));
  fila[2] = join(reverse(whiteSquare), whiteSquare);
  fila[2] = join(fila[2], repeatH(reverse(whiteSquare), 2));
  fila[3] = join(reverse(whiteSquare), whiteSquare);
  fila[3] = join(fila[3], reverse(whiteSquare));
  fila[3] = join(fila[3], superImpose(knight, whiteSquare));
  
  for(int i = 0; i < 3; i++){
    if( i == 0){
      cuadrante[0] = up(fila[i], fila[i+1]);
    }
    else{
      cuadrante[0] = up(cuadrante[0], fila[i+1]);
    }
  }
    
  interpreter(cuadrante[0]);
}
