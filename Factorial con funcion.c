#include <stdio.h>
int factorial(int n);
int factorial(int n){
	int fact=1;
	for(int i=0; i<n;i++){
		fact=fact*i;
	}
	return fact;
}
int main(int argc, char *argv[]) {
	
	int numero, resultado;
	
	printf("Escribe un numero: ");
	scanf("%d", &numero);
	
	resultado=factorial(numero);
	printf("%d", resultado)
	return 0;
}

