//Integrantes Esteban Sepulveda
//            Claudio Vasquez
//			  Victor Jofre
// Lab 2 - Ejercicio 3


#include <stdio.h>
#include <stdlib.h>

typedef struct {  //estructura llamada arreglo
	int *arreglo;  //arreglo 
	int largo;     //largo de arreglo
	}array;

array iniciarArray(){    //funcion para iniciar el arreglo
	int i;                 
	array arregloIniciar;    //declaracion de la variable arregloIniciar de tipo array
	printf("Cuantos elementos desea que tenga el arreglo: ");	
	scanf("%d",&arregloIniciar.largo);            //ingreso del largo del arreglo por parte del usuario
	arregloIniciar.arreglo=(int*)malloc(arregloIniciar.largo*sizeof(int));    //creacion del arreglo dinamico
	for (i=0;i<arregloIniciar.largo;i++){            //ciclo for para ingresar variables aleatorias al arreglo
		arregloIniciar.arreglo[i]=rand()%100;       
	}
	return arregloIniciar;  //retorno de la variable arreglo
}
void mostrarArray(array arregloMostrar){       //funcion mostrar arreglo recibiendo una variable de tipo array
		int i;
		printf("\nEl arreglo tiene los siguientes elementos\n");
		for (i=0;i<arregloMostrar.largo;i++){         //for para mostrar el contenido del arreglo ocupando el largo de arreglo
			printf("%d\t",arregloMostrar.arreglo[i]);      
		}
}
int main (){
	array arregloMain;   //declaracion de la variable arregloMain de tipo array
	arregloMain=iniciarArray();   //llamada a la funcion iniciarArray 
	mostrarArray(arregloMain);  //llamada a la funcion mostrarArray con argumento la variable arregloMain
	return 0;
}
