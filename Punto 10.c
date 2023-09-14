#include <stdlib.h>
#include <stdio.h>

int main(){
	int v[11],i,s,p,bp;
	float pr;
	pr=0; p=1; bp=0;
	for(i=1;i<=10;i++){
		printf("Ingrese un numero: ");
		scanf("%d",&v[i]);
		pr=pr+v[i];
		p=p*v[i];
	}
	s=pr;
	pr=pr/10;
	printf("La suma de los numeros ingresados es %d\n",s);
	printf("El producto de los numeros ingresados es %d\n",p);
	printf("El promedio de los numeros ingresados es %.2f\n",pr);
	s=0; p=1;
	for(i=1;i<=10;i++){
		if(v[i]<pr){
			bp++;
		}
	}
	printf("La cantidad de ingresos por debajo del promedio es %d\n",bp);
	return 0;
}
