#include <stdlib.h>
#include <stdio.h>

int main(){
	int r[6],rt,i;
	rt=0;
	for(i=1;i<=5;i++){
		printf("Ingrese la resistencia numero %d: ",i);
		scanf("%d",&r[i]);
		rt=rt+r[i];
	}
	system("CLS");
	for(i=1;i<=5;i++){
		printf("Resistencia numero %d: %d\n",i,r[i]);
	}
	printf("Resistencia total: %d\n",rt);
	system("pause");
	return 0;
}
