#include <stdio.h>
#define filas 1
#define columnas 3
//promedios

int main(int argc, char *argv[]) {
	
	int notas[filas][columnas];
	int suma;
	float promedio;
	
	printf("Matriz que calcula promedios\n\n" );
	//adorno
	//primer ciclo para capturar
	for(int i=0; i<filas;i++)
	{
		for (int j=0;j<columnas;j++)
		{
			printf("Ingresar calificacion del alumno %d en el parcial %d : ",i+1,j+1 );
			scanf("%d", &notas[i][j]);
			//escaneo de tados i son las filas y j las columnas 
			//tambien define lo del alumno 1 y lo del parcial para que no me ponga 0 :v
		}
		
	}
	
	//prueba
	printf("\n\nElementos almacenados en la tabla :\n\n");
	for(int i=0; i<filas;i++)
	{
		for (int j=0;j<columnas;j++)
		{
			printf("%d \t",notas[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//segundo ciclo para calcular 

	for(int i=0; i<filas;i++)
	{
		//hacemos lo de suma y el promedio fachilito
		suma==0;
		for (int j=0;j<columnas;j++)
		{
			printf("%d \t",notas[i][j]);
			notas[i][j] + suma == suma;
			printf("\n\n\nSuma: %d", suma);
			
		}
	
		
	}
	
	printf("\n\n");
	return 0;
}

