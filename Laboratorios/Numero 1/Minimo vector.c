#include<stdio.h>
#include<conio.h>
int main(){
	float vector[100];
	float minimo = 1000000000000000000000000000000000000;
	printf("Intorduzca los valores del arreglo recuerde que solo son 10 datos\n");
	int i;
	for(i=0;i<10;i++){
		printf("dato numero %d ",i+1);
		scanf("%f",&vector[i]);
		if(minimo>vector[i]){
			minimo=vector[i];
		}
	}
	printf("El valor minimo es: %f\n",minimo);
	return 0;
}

