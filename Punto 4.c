#include <stdlib.h>
#include <stdio.h>

int main(){
	int al[31],i;
	float p=0;
	for(i=1;i<=30;i++){
		printf("Ingrese nota del alumno numero %d: ",i);
		scanf("%d",&al[i]);
		p=p+al[i];
	}
	p=p/30;
	printf("La nota promedio del curso es %.2f\n",p);
	printf("\n");
	system("pause");
	return 0;
}
