#include <stdlib.h>
#include <stdio.h>

int main(){
	int n1,n2,i,j;
	
	j=1;
	printf("Ingrese un numero: ");
	scanf("%d",&n1);
	printf("Ingrese otro numero: ");
	scanf("%d",&n2);
	if(n1==n2 || n1==n2+1 || n2==n1+1){
		printf("No hay numeros enteros intermedios\n");
	}
	else{
		if(n1>n2){
			int v[n1-n2+1];
			printf("Los numeros intermedios son: ");
			for(i=n1-1;i>n2;i--){
				v[j]=i;
				if(i==n2+2){
					printf("%d",v[j]);
					printf(" y %d\n",v[j]-1);
					break;
				}
				else{
					printf("%d, ",v[j]);
				}
				j++;
			}
		}
		else{
			int v[n2-n1+1];
			printf("Los numeros intermedios son: ");
			for(i=n2-1;i>n1;i--){
				v[j]=i;
				if(i==n1+2){
					printf("%d",v[j]);
					printf(" y %d\n",v[j]-1);
					break;
				}
				else{
					printf("%d, ",v[j]);
				}
				j++;
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
