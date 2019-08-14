#include<stdio.h>
int main() {
	float valorUsuario, valorUsuario2, maximo;
	printf("Introduzca el primer numero entero: ");
	scanf("%f", &valorUsuario);
	printf("Introduzca el segundo numero entero: ");
	scanf("%f",&valorUsuario2);
	if(valorUsuario>valorUsuario2){
		maximo=valorUsuario;
	}else{
		maximo=valorUsuario2;
	}
	printf("El valor maximo es: %.2f\n",maximo);
	return 0;
}
