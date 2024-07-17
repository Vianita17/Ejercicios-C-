#include <stdio.h>
int suma(int num1, int num2)
{
	int operacion;
	operacion =num1*2 + num2;
	printf("num1 en main: %d",num1);
	printf("num2 en main: %d",num2);
	return operacion;
}
int main(int argc, char *argv[]) {
	int num1,num2,resultado;
	printf("Escriba un numero: ");
	scan("%d", &num1);
	
	printf("Escriba un numero: ");
	scan("%d", &num2);
	
	resultado = suma(num1,num2);
	
	printf("num1 en main: %d",num1);
	printf("num2 en main: %d",num2);
	
	printf("El resultado es: %d", resultado);
	return 0;
}

