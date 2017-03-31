//Integrantes Esteban Sepulveda
//            Claudio Vasquez
//        Victor Jofre
// Lab 2 - Ejercicio 3

#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int **ptrMatriz;
  int filas;
  int columnas;
}matrix;

void sumarMatriz(matrix matrizS){
  int i,j;
  printf("La matriz contiene los siguientes elementos \n");
  for (i=0;i<matrizS.filas;i++){
    for (j=0;j<matrizS.columnas;j++){
      printf("%d\t",matrizS.ptrMatriz[i][j]);
    }
    printf("\n");
  }

}
matrix iniciarMatriz(){
  matrix matrizI;
  int i,j;
  printf("Cuantas filas desea que tenga la matriz: ");
  scanf("%d",&matrizI.filas);
  printf("\nCuantas columnas desea que tenga la matriz: ");
  scanf("%d",&matrizI.columnas);
  matrizI.ptrMatriz=(int**)malloc(matrizI.filas*sizeof(int*));
  for (i=0;i<matrizI.filas;i++){
    matrizI.ptrMatriz[i]=(int*)malloc(matrizI.columnas*sizeof(int));

  }
  for (i=0;i<matrizI.filas;i++){
    for (j=0;j<matrizI.columnas;j++){
      matrizI.ptrMatriz[i][j]=rand()%100;
    }
  }
  return matrizI;
}

int main (){
  matrix matrizM=iniciarMatriz();
  sumarMatriz(matrizM);
  
  
  return 0;
}