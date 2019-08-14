#include<stdio.h>
#include<conio.h>
float suma(float a, float b){
	return a+b;
}
float resta(float a, float b){
	return a-b;
}
float multiplicacion(float a,float b){
	return a*b;
}
float division(float a,float b){
	if(b==0){
		return 0;
	}
	return a/b;
}
int menu(){
	int opcion;
	float numerouno,numerodos;
	
	printf("Bienvenido que operacion desea hacer.\n  Oprima uno para sumar dos numeros enteros enteros.\n  Oprima dos para restar dos numeros enteros.\n  Oprima tres para multiplicar dos numeros enteros.\n  Oprima cuatro para dividir dos numeros enteros.\n  oprima cero para salir.\n");
	scanf("%d",&opcion);
	while(opcion!=0){
		if(opcion==1){
			printf("Ingrese el primer numero a sumar.\n");
			scanf("%f",&numerouno);
			printf("Ingrese el segundo numero a sumar.\n");
			scanf("%f",&numerodos);
			printf("la suma fue\n%f\n",suma(numerouno,numerodos));
		}else if(opcion==2){
			printf("Ingrese el primer numero a restar.\n");
			scanf("%f",&numerouno);
			printf("Ingrese el segundo numero a restar.\n");
			scanf("%f",&numerodos);
			printf("la resta fue\n%f\n",resta(numerouno,numerodos));
		}else if (opcion==3){
			printf("Ingrese el primer numero a multiplicar.\n");
			scanf("%f",&numerouno);
			printf("Ingrese el segundo numero a multiplicar.\n");
			scanf("%f",&numerodos);
			printf("la multiplicacion fue\n%f\n",multiplicacion(numerouno,numerodos));
		}else if(opcion==4){
			printf("Ingrese el primer numero a dividir.\n");
			scanf("%f",&numerouno);
			printf("Ingrese el segundo numero a dividir.\n");
			scanf("%f",&numerodos);
			if(division(numerouno,numerodos)==0)printf("la division es indeterminada");
			else printf("la divicion fue\n%f\n",division(numerouno,numerodos));
		}
		printf("Oprima uno para sumar dos numeros enteros enteros.\n  Oprima dos para restar dos numeros enteros.\n  Oprima tres para multiplicar dos numeros enteros.\n  Oprima cuatro para dividir dos numeros enteros.\n  oprima cero para salir.\n");
		scanf("%d",&opcion);
	}
	return 0;
}
int main(){
	menu();
	return 0;
}
