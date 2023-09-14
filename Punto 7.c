#include <stdio.h>
#include <stdlib.h>

int main() {
	int n[16],p[16],i,j;
	j=0;
	for(i=1;i<=15;i++){
		printf("Alumno numero %d\n",i);
		printf("Ingrese su nota: ");
		scanf("%d",&n[i]);
		if(n[i]>=8){
			j++;
			p[j]=i;
		}
	}
	if(j>0){
		if(j==1){
			printf("El unico alumno con nota mayor o igual a 8 es el numero ");
			printf("%d\n",p[1]);
		}
		else{
			printf("Los alumnos con nota mayor o igual a 8 son los numero ");
			for(i=1;i<=j;i++){
				if(i==j){
					printf("y %d\n",p[i]);
				}
				else{
					if(i==j-1){
						printf("%d ",p[i]);
					}
					else{
						printf("%d, ",p[i]);
					}
				}
			}
		}
	}
	else{
		printf("Ningun alumno posee nota igual o superior a 8\n");
	}
	return 0;
}
