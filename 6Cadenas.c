/*#include <stdio.h>
//Uso de cadenas
int main(int argc, char *argv[]) {
	/*
	Leer una lista o cadena de letras con una sola instrucci�n
		scanf (�%s�, palabra); // hasta espacio o fin de l�nea
		gets( frase); // hasta fin de l�nea
	Escribir una lista de letras
		printf (�%s�, palabra);
		puts(palabra);
	Copiar una lista de letras <string.h>
		strcpy (str_destino, str_origen)
		strcpy(nombre, �Jorge Lopez�)
	*/
//EJERCICIO
//Lee una Cadena de caracteres y convierte las min�sculas a may�sculas y viceversa.
//Adem�s cuenta cu�ntos caracteres son d�gitos num�ricos.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (void)
{
	char cadena[100];
	int contador = 0;
	register int i;
	printf ("\nTeclee una cadena de caracteres: ");
	gets (cadena);
	for (i = 0; i < strlen (cadena); i++) {
		if (isupper (cadena[i])) 
			cadena[i] = tolower (cadena[i]);
		else if (islower (cadena[i])) 
			cadena[i] = toupper (cadena[i]);
		else if (isdigit (cadena[i])) 
			contador++;
	}
	printf ("\nLa cadena tiene %d d�gitos num�ricos\n", contador);
	puts (cadena);
	getch();
	return 0;
}

