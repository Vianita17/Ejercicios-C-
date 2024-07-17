//Programa para contar vocales
#include <stdio.h>
void contador(char texto[30]);
int main(int argc, char *argv[]) {
	
	int v;
	char texto[30];
	printf("Ingrese una palabra: ");
	gets(texto);
	
	contador(texto);
	
	return 0;
}
void contador(char texto[30]){
	int v=0;
	
	for(int i=0; i<30; i++){
		switch (texto[i]) /* Usamos este switch para evaluar cada letra del texto ingresado
			y si es una vocal hace un conteo mas 1 en la variable v*/
		{
			//Para el caso de las minusculas.	
		case 'a':
			v++; // Para el conteo de las vocales.
			break;
		case 'e':
			v++;
			break;
		case 'i':
			v++;
			break;
		case 'o':
			v++;
			break;
		case 'u':
			v++;
			break;
			
			//Para que reconozca las mayuculas tambien.  
		case 'A':
			v++;
			break;
		case 'E':
			v++;
			break;
		case 'I':
			v++;
			break;
		case 'O':
			v++;
			break;
		case 'U':
			v++;
			break;	
			
		default: // En caso de que la letra no sea una vocal no hace nada.
			break;
		}
		
	}
	printf("\n En el texto hay: %d vocales. \n",v);
}
	
