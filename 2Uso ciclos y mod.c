/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

int main() {
	int c;
	int d;
	int dm;
	int m;
	int n;
	int u;
	printf("escribir un valor\n");
	scanf("%d",&n);
	if (n<10000) {
		dm =(n/10000);
		m =((n%10000)/1000);
		c =(((n%10000)%1000)/100);
		d =((((n%10000)%1000)%100)/10);
		u = (n%10);
		printf("%d,%d,%d,%d,%d\n",dm,m,c,d,u);
	} else {
		do {
			printf("escribir un valor\n");
			scanf("%f",&n);
		} while (n>99999);
		dm = (n/10000);
		m = ((n%10000)/1000);
		c =(((n%10000)%1000)/100);
		d =((((n%10000)%1000)%100)/10);
		u =(n%10);
		printf("%d,%d,%d,%d,%d\n",dm,m,c,d,u);
	}
	return 0;
}

