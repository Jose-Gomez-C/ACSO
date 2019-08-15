#include<stdio.h>
int sumaNumeros(int a,int b){
	return a+b;
}
int leerVector(){
	int vector[10];
	int suma;
	printf("Intorduzca los valores del arreglo recuerde que solo son 10 datos\n");
	int i;
	for(i=0;i<10;i++){
		printf("dato numero %d ",i+1);
		scanf("%d",&vector[i]);
		suma=sumaNumeros(suma,vector[i]);
	}
	printf(imprimirVector(vector));
	return suma;
	
}
int imprimirVector(int vector[]){
	int x;
	printf("El vector es\n");
	for(x=0;x<10;x++){
		printf("%d ",vector[x]);
	}
	return 0;
}

int main(){
	int suma;
	printf("\n La suma es %d",leerVector());	
	return 0;
}
