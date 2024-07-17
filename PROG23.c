#include <stdio.h>
//Programa con menú interactivo que contenga la operaciones de sumatoria y factorial de n numero, con funciones

int sumatoria(int n);
int factorial(int x);
int main(int argc, char *argv[]) {
	int in,op,n,res, fac,x;
	in = 0;
	
	while((in==0)){
		printf("\nMENU\n");
		printf("\nQUE DESEA REALIZAR:\n");
		printf("\n");
		printf("1)SUMATORIA DE UN NUMERO\n");
		printf("2)FACTORIAL DE UN NUMERO\n");
		printf("3)SALIR\n");
		scanf("%d",&op);
		fflush(stdin);
		switch(op){
		case 1:
			printf("¿Cuanto va hacer la cantiadad de n numeros sumaremos?");
			scanf("%d", &n);
			fflush(stdin);
			res= sumatoria(n);
			printf("La sumatoria es: %d", res);
			break;
		case 2:
			printf("Numero a factorizar: ");
			scanf("%d", &x);
			fflush(stdin);
			fac= factorial(x);
			printf("El factorial es: %d", fac);
			break;
		case 3:
			printf("Goodbye");
			in=1;
			break;
		}
		
	}
	return 0;
}

int sumatoria(int n)
{
int resultado, cont=1;
resultado=0;
	while(cont<=n){
		
		resultado= resultado+cont;
		cont++;
	}
	return resultado;
}

int factorial(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
		
	}
	return fact;
}
