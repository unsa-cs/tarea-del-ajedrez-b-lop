#include "chess.h"
#include "figures.h"

void display(){
  char **base_C;
  char **fila;
  base_C = join(whiteSquare,reverse(whiteSquare));
  fila = repeatH(base_C, 4);

  char **piezas_Blancas;
  
  char **fila_con_piezas;
  
  piezas_Blancas = join(rook, knight);
  piezas_Blancas = join(piezas_Blancas, bishop);

  piezas_Blancas = join(piezas_Blancas, queen);
  piezas_Blancas = join(piezas_Blancas, king);
  piezas_Blancas = join(piezas_Blancas, bishop);
  piezas_Blancas = join(piezas_Blancas, knight);
  piezas_Blancas = join(piezas_Blancas, rook);

  fila_con_piezas = superImpose(piezas_Blancas,reverse(fila));

  interpreter(fila_con_piezas);
}
