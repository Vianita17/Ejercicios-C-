#include <stdio.h>

//concepto de arreglo matriz

int main(int argc, char *argv[]) {
	
	//concepto de la matriz para solo definir valores e imprimirlos luego
	/*int tabla[3][4]= {{0, 3, 4, 10},{3,1,-10,10},{10,100,3,1},};
	
	for(int i=0; i<3;i++)
	{
		for (int j=0;j<4;j++)
		{
			printf("%d \t",tabla[i][j]);
		}
		printf("\n");
	}*/
	
	//Concepto de la matriz para pedir valores y luego guardar e imprimir
	//HERE ya no se tiene que definir los valores por ovias razones
	
	int tabla[3][4];
	
	//usas dos ciclos uno que pide los valores y los guarda
	
	printf("Ingrese valores para la tabla de 3 x 4 \n\n" );
	for(int i=0; i<3;i++)
	{
		for (int j=0;j<4;j++)
		{
			printf("Elemento[%d,%d] : ",i,j );
			/*como los dos son numeros enteros usas dos veces 
			la expresioon de numero entero pero defines que son i y j en orden*/
			scanf("%d", &tabla[i][j]);
			//escaneo de tados i son las filas y j las columnas
		}
	
	}
	
	//y otro que los imprime
	printf("\n\nElementos almacenados en la tabla :\n\n");
	for(int i=0; i<3;i++)
	{
		for (int j=0;j<4;j++)
		{
			printf("%d \t",tabla[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	return 0;
}

