#include <stdio.h>
/*
Programa
	Define funciones para leer los datos en una arreglo
	Funcion para sumar un arreglo
	Funcion para imprimir el arreglo resultante
*/

void leer_datos(int *arr, int n);
void sumarArreglos(int *arr1, int *arr2, int *arrRes, int n);
void imprimir(int *arr, int n);

int main(int argc, char *argv[]) {
	
	int n;		//solicita un entero al usuario
	
	printf("Escribe la cantidad de numeros que desea ingresar:  ");
	scanf("%d", &n);
	
	int arrA[n],arrB[n], arrRes[n];
	leer_datos(arrA,n);
	leer_datos(arrB,n);
	
	sumarArreglos(arrA, arrB, arrRes, n);
	imprimir(arrRes, n);
	
	return 0;
}

void imprimir(int *arr, int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
void leer_datos(int *arr, int n){
	
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}

void sumarArreglos(int *arr1, int *arr2, int *arrRes, int n){
	int i;
	while(i<n){
		arrRes[i] = arr1[i] + arr2[i];
		i++;
	}
}
