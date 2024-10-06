#include "chess.h"
#include "figures.h"

void display(){
  char **fila[8];
  char **tablero;

  char **blackSquare = reverse(whiteSquare);
  
  int pos[8] = {4,1,3,6,2,7,5,0};

  for(int i=0;i<8;i++){
    if( i%2 == 0 ){
      for(int j=0;j<8;j++){
        if(pos[i]==j && j==0){
          fila[i]=superImpose(queen,whiteSquare);
        }
        else if(pos[i]==j && j%2!=0) {
          fila[i]=join(fila[i],superImpose(queen,blackSquare));
        }
        else if(pos[i]==j){
          fila[i]=join(fila[i],superImpose(queen,whiteSquare));
        }
        else if(j==0){
          fila[i]=whiteSquare;
        }
        else if(j%2==0){
          fila[i]=join(fila[i], whiteSquare);
        }
        else{
          fila[i]=join(fila[i],blackSquare);
        }
      }
    }
    else{
      for(int j=0;j<8;j++){
        if(pos[i]==j && j==0){
          fila[i]=superImpose(queen,blackSquare);
        }
        else if(pos[i]==j && j%2!=0) {
          fila[i]=join(fila[i],superImpose(queen,whiteSquare));
        }
        else if(pos[i]==j){
          fila[i]=join(fila[i],superImpose(queen,blackSquare));
        }
        else if(j==0){
          fila[i]=blackSquare;
        }
        else if(j%2==0){
          fila[i]=join(fila[i],blackSquare);
        }
        else{
          fila[i]=join(fila[i],whiteSquare);
        }
      }
    }
    if (i == 0){
      tablero = fila[i];
    }
    else{
      tablero = up(tablero, fila[i]);
    }
  }
  
  interpreter(tablero);
}
