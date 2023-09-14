#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,v[21],vt,j;
	float vm;
	vt=0; vm=0;
	for(i=1;i<=20;i++){
		printf("Vendedor numero %d\n",i);
		printf("Ingrese cantidad de ventas: ");
		scanf("%d",&v[i]);
		vt=vt+v[i];
		if(v[i]>vm){
			vm=v[i];
			j=i;
		}
	}
	system("CLS");
	printf("Ventas totales: %d\n",vt);
	vm=vm/15;
	printf("El vendedor con la mayor venta diaria es el numero %d con un promedio de %.2f\n",j,vm);
	system("pause");
	return 0;
}
