#include "chess.h"
#include "figures.h"

void display(){
  char **base_C;
  char **fila;
  base_C = join(whiteSquare,reverse(whiteSquare));
  fila = repeatH(base_C, 4);

  char **piezas_Blancas;
  
  char **fila_con_piezas;
  char **fila_peones;
  
  piezas_Blancas = join(rook, knight);

  piezas_Blancas = join(piezas_Blancas, bishop);
  piezas_Blancas = join(piezas_Blancas, queen);
  piezas_Blancas = join(piezas_Blancas, king);
  piezas_Blancas = join(piezas_Blancas, bishop);
  piezas_Blancas = join(piezas_Blancas, knight);
  piezas_Blancas = join(piezas_Blancas, rook);

  fila_con_piezas = superImpose(piezas_Blancas,reverse(fila));
  
  fila_peones = repeatH(pawn, 8);
  fila_peones = superImpose(fila_peones,fila);

  fila_con_piezas = up(fila_con_piezas, fila_peones);

  fila_con_piezas = up(fila_con_piezas, reverse(fila));
  fila_con_piezas = up(fila_con_piezas, fila);

  fila_con_piezas = up(fila_con_piezas, reverse(fila));
  fila_con_piezas = up(fila_con_piezas, fila);
  
  interpreter(fila_con_piezas);
}
