#include "chess.h"
#include "figures.h"

void display(){
  char **base_C;
  char **fila;
  base_C = join(whiteSquare,reverse(whiteSquare));
  fila = repeatH(base_C, 4);

  char **piezas_Blancas;
  char **piezasR_Blancas;
  
  char **fila_con_piezas;
  
  piezasR_Blancas = join(rook, knight);
  piezasR_Blancas = join(piezasR_Blancas, bishop);

  piezas_Blancas = join(piezasR_Blancas, queen);
  piezas_Blancas = join(piezas_Blancas, king);

  piezas_Blancas = join(piezas_Blancas, flipV(piezasR_Blancas));

  fila_con_piezas = superImpose(piezas_Blancas,reverse(fila));

  interpreter(fila_con_piezas);
}
