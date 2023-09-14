#include <stdlib.h>
#include <stdio.h>

int main(){
	int n[6],i,m;
	float p;
	p=0; m=0;
	for(i=1;i<=5;i++){
		if(i==1){
			printf("Ingrese un numero: ");
		}
		else{
			printf("Ingrese otro numero: ");
		}
		scanf("%d",&n[i]);
		p=p+n[i];
		if(n[i]>m){
			m=n[i];
		}
	}
	p=p/5;
	printf("\n");
	printf("El promedio de los numeros ingresados es %.2f\n",p);
	printf("El numero ingresado mas alto es %d\n",m);
	system("pause");
	return 0;
}
