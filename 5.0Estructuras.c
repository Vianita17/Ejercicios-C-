#include <stdio.h>

int main(int argc, char *argv[]) {
	struct Producto{
		int clave;
		char nombre[50];
		float precio;
	};
	
	struct Producto bodega[4];
	
	for (int k=0; k<2; k++){
	printf("Datos del producto %d", k+1);
	fflush(stdin);
	printf("\nEscribir Clave: ");
	scanf("%d", bodega[k].clave);
	fflush(stdin);
	printf("Escribir el nombre del producto: ");
	gets(bodega[k].nombre);
	fflush(stdin);
	printf("Escriba el precio: ");
	scanf("%.2f", bodega[k].precio);
	}
	
	for (int k=0; k<2; k++){
		printf("Datos del producto %d", k+1);
		fflush(stdin);
		printf("Clave: %d",bodega[k].clave);
		fflush(stdin);
		printf("Nombre del producto: %c",bodega[k].nombre);
		fflush(stdin);
		printf("Escriba el precio: %.2f", bodega[k].precio);
	}
	return 0;
}

