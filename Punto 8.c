#include <stdlib.h>
#include <stdio.h>

int main(){
	int n[21],i,j;
	n[0]=0; n[1]=1; n[2]=1; j=1;
	printf("Secuencia Fibonacci de 20 numeros\n");
	printf("0\n");
	for(i=1;i<=20;i++){
		j=i;
		printf("%d \n",n[i]);
		n[j+1]=n[j]+n[j-1];
	}
	return 0;
}
