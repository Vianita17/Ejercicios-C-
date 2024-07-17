#include <stdio.h>
/*hacer que un algoritmo llene una matriz de 10x10
y los almacene en la diagonal principal unos y en las demas posiciones ceros*/

int main(int argc, char *argv[]) {
	
	int tabla[10][10];
	
	for(int i=0; i<10;i++)
	{
		for (int j=0;j<10;j++)
		{
			if(i==j)
			{
				tabla[i][j]=1;
				//pones condicon de que pasa si y que pasa sino
				//para que quede diagonal tiene que ser que los valores coincidan 0,0 o 1,1 o 2,2
			}
			else
			{
				tabla[i][j]=0;
				
			}
		}
	}
	//imprimes
	for(int i=0; i<10;i++)
	{
		for (int j=0;j<10;j++)
		{
			printf("%d\t",tabla[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

