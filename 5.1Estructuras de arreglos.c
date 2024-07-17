#include <stdio.h>

int main(int argc, char *argv[]) {
	struct libro{
		char titulo[50];
		char nombre[50];
		char editorial[50];
		int edicion;
		int isbn;
	};
	//estructura de arreglos
	struct libro FP[4];
	
	for(int i=0; i<2; i++){
	
		printf("Escriba los datos del libros %d", i+1);
		fflush(stdin);
		printf("Escribir titulo: ");
		gets(FP[i].titulo);
		fflush(stdin);
		printf("Escriba el nombre: ");
		gets(FP[i].nombre);
		fflush(stdin);
		printf("Escriba la editorial: ");
		gets(FP[i].editorial);
		fflush(stdin);
		printf("Escriba la edicion: ");
		scanf("%d", &FP[i].edicion);
		printf("Escriba el ISBN: ");
		scanf("%d", &FP[i].isbn);
	}
	//LEER DATOS
	
	
	//IMPRIMIR DATOS
	for(int i=0; i<2; i++){
		
		printf("\nLos datos el libro son: ");
		printf("\nTítulo: %s", FP[i].titulo);
		printf("\nNombre: %s", FP[i].nombre);
		printf("\nEditorial: %s", FP[i].editorial);
		printf("\nEdición: %d", FP[i].edicion);
		printf("\nISBN: %d", FP[i].isbn);
		
	}


	return 0;
}

