#include <stdio.h>

int funcionSuma(int a,int b) {
	return a + b;
}

void main() {
	int n1,n2,suma;
	n1 = 9;
	n2 = 3;

	printf("\n n1= %d", n1);
	printf("\n n2= %d", n2);
	/* Acceder a la posición de memoria
	printf("\n &n1= %d", &n1);
	printf("\n &n2= %d", &n2);
	*/
	suma = funcionSuma(n1,n2);
	printf("\n La suma es: %d",suma);
}

