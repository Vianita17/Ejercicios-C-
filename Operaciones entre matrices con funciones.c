#include <stdio.h>

#define filas 2
#define columnas 2

//void leer_datos(int *Matriz[][columnas],int f, int C);
void operaciones(float MatrizA[][columnas],float MatrizB[][columnas], float MatrizC[][columnas],int f, int C);


int main(int argc, char *argv[]) {
	
	float MatrizA[filas][columnas];
	float MatrizB[filas][columnas];
	float MatrizC[filas][columnas];
	int i,j;
	
	printf("--VALORES DE LA MATRIZ A-- \n");
	
	for (i=0;i<filas;i++){
		for (j=0;j<columnas;j++){
			printf("Valores en Matriz A[%d][%d]: ",i,j);
			scanf("%f ",&MatrizA[i][j]);
		}
		
	}
	for (i=0;i<filas;i++){
		for (j=0;j<columnas;j++){
			printf("%.0f ",MatrizA[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("--VALORES DE LA MATRIZ B-- \n");
	
	for (i=0;i<filas;i++){
		for (j=0;j<columnas;j++){
			printf("Valores en Matriz B[%d][%d]: ",i,j);
			scanf("%f ",&MatrizB[i][j]);
		}
	}
	for (i=0;i<filas;i++){
		for (j=0;j<columnas;j++){
			printf("%.0f ",MatrizB[i][j]);
		}
		printf("\n");
	}
	
	/*leer_datos(MatrizA,filas,columnas);
	leer_datos(MatrizB,filas,columnas);*///esta parte no logre que lo haga pq segun la funcion es incopatible
	//era para independientemente de las matrices que se necesites pueda llamar una por una si teclear los procesos individuales :c
	operaciones(MatrizA,MatrizB,MatrizC,filas,columnas);

	return 0;
}

/*void leer_datos(int *Matriz1[][columnas]){
int i,j;
for (i=0;i<filas;i++){
for (j=0;j<columnas;j++){
printf("Escribe los valores para la Matriz");
printf("Escribe valor para la posicion %d x %d : ",i,j);
scanf("%.d",&Matriz1[i][j]);
}
printf("\n");
}
}*/
void operaciones(float MatrizA[][columnas],float MatrizB[][columnas], float MatrizC[][columnas],int f, int C){
	int i, j;
	//proceso suma
	for (i=0;i<f;i++){
		for(j=0;j<C;j++){
			MatrizC[i][j]=MatrizA[i][j]+MatrizB[i][j];
		}
	}
	//impresion suma
	printf("SUMA DE LAS MATRICES: \n");
	for (i=0;i<filas;i++){
		for (j=0;j<columnas;j++){
			printf("%.0f ",MatrizC[i][j]);
		}
		printf("\n");
	}
	//proceso resta
	for (i=0;i<f;i++){
		for(j=0;j<C;j++){
			MatrizC[i][j]=MatrizA[i][j]-MatrizB[i][j];
		}
	}
	//impresion resta
	printf("RESTA DE LAS MATRICES: \n");
	for (i=0;i<filas;i++){
		for (j=0;j<columnas;j++){
			printf("%.0f ",MatrizC[i][j]);
		}
		printf("\n");
	}
	//PROCESO multi
	for (i=0;i<f;i++){
		for(j=0;j<C;j++){
			MatrizC[i][j]=MatrizA[i][j]*MatrizB[i][j];
		}
	}
	//impresion multi
	printf("MULTIPLIACION DE LAS MATRICES: \n");
	for (i=0;i<filas;i++){
		for (j=0;j<columnas;j++){
			printf("%.0f ",MatrizC[i][j]);
		}
		printf("\n");
	}
}
