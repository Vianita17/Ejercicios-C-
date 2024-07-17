#include <stdio.h>
/*
programa si es no positivo los numeros de una arreglo
*/
void leer_datos(int *arr, int n);
void contador(int *arr1, int n);

int main(int argc, char *argv[]) {
	
	int n;		//solicita un entero al usuario
	
	printf("Escribe la cantidad de numeros que desea ingresar:  ");
	scanf("%d", &n);
	
	int arrA[n];
	leer_datos(arrA,n);
	contador(arrA, n);
	
	return 0;
}

void leer_datos(int *arr, int n){
	
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
	
void contador(int *arr1, int n){
	int positivo=0,negativo=0;
	for (int i=0;i<n;i++){
		if(arr1[i]>0){
			positivo++;
		}
		else if(arr1[i]==0){
			positivo++;
		}
		else{
			negativo++;
		}
	}
	printf("\nLos numeros positivos son: %d",positivo);
	printf("\nLos numeros negativos son: %d",negativo);
}
