#include <stdio.h>
int suma(int num1, int num2);
void imprime(int resultado);

int main(int argc, char *argv[]) {
	int num1,num2,resultado;
	printf("Escriba un numero: ");
	scan("%d", &num1);
	
	printf("Escriba un numero: ");
	scan("%d", &num2);
	
	resultado = suma(num1,num2);
	
	printf("num1 en main: %d",num1);
	printf("num2 en main: %d",num2);
	imprime (resultado);
	//printf("El resultado es: %d", resultado);
	return 0;
}


int suma(int num1, int num2)
{
	int operacion;
	operacion =num1*2 + num2;
	printf("num1 en main: %d",num1);
	printf("num2 en main: %d",num2);
	return operacion;
}
void imprime (int result)
	
//void solo es un proceso que no devuelve nada pero realiza un proceso
{
	printf("el resultado de la suma es: %d",result);
}
