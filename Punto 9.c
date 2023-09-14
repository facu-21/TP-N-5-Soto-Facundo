#include <stdlib.h>
#include <stdio.h>

int main(){
	int v[2],n1,i,a,d,s;
	a=1; d=1;
	printf("Ingrese un listado de numeros:\n");
	printf("Ingrese un numero: ");
	scanf("%d",&v[0]);
	n1=v[0];
	if(v[0]!=0){
		i=1;
		while(v[1]!=0){
			printf("Ingrese otro numero: ");
			scanf("%d",&n1);
			if(n1!=0){
				if(i==1){
					v[1]=v[0];
				}
				i++;
				if(n1>v[1] && a==1){
					a=1;
				}
				else{
					a=0;
				}
				if(n1<v[1] && d==1){
					d=1;
				}
				else{
					d=0;
				}
				v[1]=n1;
			}
			else{
				break;
			}
		}
		if(i==1){
			printf("Solo hubo un ingreso\n");
		}
		else{
			if(a==1){
				printf("Los numeros fueron ingresados de forma ascendente\n");
			}
			else{
				if(d==1){
					printf("Los numeros fueron ingresados de forma descendente\n");
				}
				else{
					printf("Los numeros fueron ingresados de forma desordenada\n");
				}
			}
			s=v[0]+v[1];
			printf("La suma entre el primer y ultimo numero es %d\n",s);
		}
	}
	else{
		printf("No hubo ingresos validos\n");
	}
	return 0;
}
