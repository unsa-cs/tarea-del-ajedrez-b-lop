#include "chess.h"
#include "figures.h"

void display(){
  char **base_C;
  char **fila;
  base_C = join(whiteSquare,reverse(whiteSquare));
  fila = repeatH(base_C, 4);
  
  char **base_f = up(reverse(fila), fila);
  char **piezas_Blancas;
  
  char **fila_con_piezas;
  char **fila_peones;
  
  char **tablero;

  char **piezas[8] = {rook, knight, bishop, queen, king, bishop, knight, rook};

  for (int i = 0 ; i < 7 ; i++){
    piezas_Blancas = join(piezas[i], piezas[i+1]);
  }

  /*
  piezas_Blancas = join(rook, knight);
  piezas_Blancas = join(piezas_Blancas, bishop);
  piezas_Blancas = join(piezas_Blancas, queen);
  piezas_Blancas = join(piezas_Blancas, king);
  piezas_Blancas = join(piezas_Blancas, bishop);
  piezas_Blancas = join(piezas_Blancas, knight);
  piezas_Blancas = join(piezas_Blancas, rook);
  */

  fila_con_piezas = superImpose(piezas_Blancas,reverse(fila));
  
  fila_peones = repeatH(pawn, 8);
  fila_peones = superImpose(fila_peones,fila);

  tablero = up(tablero, fila_peones);

  tablero = up(tablero, repeatV(base_f, 2));

  tablero = up(tablero, reverse(fila_peones));
  tablero = up(tablero, reverse(fila_con_piezas));
  
  interpreter(tablero);
}
