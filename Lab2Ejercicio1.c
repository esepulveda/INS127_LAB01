//Integrantes Esteban Sepulveda
//            Claudio Vasquez
//			  Victor Jofre
// Lab 2 - Ejercicio 3

#include <stdio.h>
#include <math.h>

typedef struct {
	int r;
	int i;
}Complex;

Complex suma(Complex z, Complex w);
Complex multiplicacion(Complex z, Complex w);
Complex real(Complex z, Complex w);
Complex imaginaria(Complex z, Complex w);
Complex absoluto (Complex z, Complex w);
Complex conjugado (Complex z, Complex w);
int iguales (Complex z, Complex w);

int main(){
	Complex x,y;
	x.r = 10;
	x.i = 5;
	y.r = 7;
	y.i = 8;
	printf(" (%i, %i) \n", x.r, x.i);
	printf(" (%i, %i) \n", y.r, y.i);
	Complex aux;
	aux = suma (x, y);
	printf(" (%i, %i) + (%i, %i) = (%i, %i)\n", x.r, x.i, y.r, y.i, aux.r, aux.i);
	aux = multiplicacion(x,y);
	printf(" (%i, %i) + (%i, %i) = (%i, %i)\n", x.r, x.i, y.r, y.i, aux.r, aux.i);
	printf(" (%i, %i) == (%i, %i) ?  %i \n", x.r, x.i, y.r, y.i, iguales(x,y));
	printf("\n");
	aux= real(x,y);
	printf(" Parte real: (%i, %i)  = (%i), (%i, %i)  = (%i)\t\n", x.r, x.i, aux.r, y.r, y.i, aux.i);
	printf("\n");
	aux= imaginaria(x,y);
	printf(" Parte imaginaria: (%i, %i)  = (%i), (%i, %i)  = (%i)\t\n", x.r, x.i, aux.r, y.r, y.i, aux.i);
	printf("\n");
	aux= absoluto(x,y);
	printf(" Valor Absoluto: (%i, %i)= |(%i)|, (%i, %i)=|(%i)| \n", x.r, x.i, aux.r, y.r,y.i, aux.i);
	printf("\n");
	aux= conjugado(x,y);
	printf(" Conjugado: (%i, %i)= (%i),  (%i, %i) = (%i)\n", x.r, x.i, aux.r, y.r, y.i, aux.i);
	printf("\n");	
return 0;
}
Complex suma(Complex z, Complex w){
	Complex aux;
	aux.r = z.r + w.r;
	aux.i = z.i + w.i;

	return aux;
}
Complex multiplicacion(Complex z, Complex w){
	Complex aux;
	aux.r = z.r*w.r - z.i*w.i;
	aux.i = z.r*w.i + z.i*w.r;

	return aux;
}
int iguales(Complex z, Complex w){
	if (z.r == w.r && z.i == w.i) return 1;
	return 0;
}
Complex real(Complex z, Complex w){
	Complex aux; 
	aux.r = z.r;
	aux.i = w.r;
	return aux;
}
Complex imaginaria(Complex z, Complex w){
	Complex aux;
	aux.r = z.i;
	aux.i = w.i;
	return aux;
}
Complex absoluto (Complex z, Complex w){
	Complex aux; int raiz;
	   raiz = ((z.r * z.r) + (z.i * z.i));
	   aux.r = sqrt(raiz);
	   raiz = 0;
	   raiz = ((w.r * w.r) + (w.i * w.i));
	   aux.i = sqrt(raiz);
return aux;
}
Complex conjugado (Complex z, Complex w){
	Complex aux;
	   aux.r = (z.r + z.i);
	   aux.i = (w.r + w.i);
return aux;
}