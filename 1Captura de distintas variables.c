#include <stdio.h>

int main(int argc, char *argv[]) {
	char nombre[50], dep[50], curp[18], categoria,casado;
	int nss, as;
	float sueldo;
	
	
	printf("Escribe tu nombre: ");
	gets(nombre);
	fflush(stdin);
	printf("Escribe tu sueldo: ");
	scanf("%f",&sueldo);
	fflush(stdin);
	printf("Escribe tu NSS: ");
	scanf("%d",&nss);
	fflush(stdin);
	printf("Escribe tu curp: ");
	gets(curp);
	fflush(stdin);
	printf("Escribe la categoria que perteneces: ");
	scanf("%c",&categoria);
	fflush(stdin);
	printf("Escribe tus años de trabajo: ");
	scanf("%d",&as);
	fflush(stdin);
	printf("Escribe al departamento que perteneces: ");
	scanf("%s",&dep);
	printf("¿Estas casado? ");
	scanf("%c",&casado);
	fflush(stdin);
	
	printf("\nNombre: %s", nombre);
	printf("\nSueldo: %f", sueldo);
	printf("\nNSS: %d", nss);
	printf("\nCurp: %s", curp);
	printf("\nCategoria: %c", categoria);
	printf("\nAños trabajados: %i", as);
	printf("\nDepartamento: %s", dep);
	printf("\nCasado: %c", casado);
	return 0;
}

