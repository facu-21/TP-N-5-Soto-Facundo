#include <stdio.h>
#include <stdlib.h>

int main() {
	int s[21],ma,me,i;
	ma=0; me=0;
	for(i=1;i<=20;i++){
		printf("Ingrese su sueldo: ");
		scanf("%d",&s[i]);
		if(s[i]>=2000){
			ma++;
		}
		else{
			me++;
		}
	}
	printf("La cantidad de sueldos iguales o superiores a $2000 es %d\n",ma);
	printf("La cantidad de sueldos inferiores a $2000 es %d\n",me);
	return 0;
}
