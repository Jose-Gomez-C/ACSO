#include<stdio.h>
#include<string.h>
void restar(char numero1[1000],char numero2[1000],int cerosIzquierdaLista1, int cerosIzquierdaLista2){
	int i=strlen(numero1)-1,j,posicion=999,lleva=0,entro1,entero2;
	char resultado[1000];
	memset(resultado,'\0',1000);
	for (j=strlen(numero2)-1;j>=cerosIzquierdaLista2;j--){
		entro1=numero1[i]-48;
		entero2=numero2[j]-48;
		if (entro1-entero2-lleva<0){
			resultado[posicion]=entro1-entero2-lleva+58;
			lleva=1;
			i--;
			posicion--;
		}else{
			resultado[posicion]=entro1-entero2-lleva+48;
			lleva=0;
			i--;
			posicion--;
			
		}
	}
	while (i>=cerosIzquierdaLista1){
		entro1=numero1[i]-48;
		if (entro1-lleva<0){
			resultado[posicion]=entro1-lleva+58;
			lleva=1;
			i--;
			posicion--;
		}else{
			resultado[posicion]=entro1-lleva+48;
			lleva=0;
			i--;
			posicion--;
		}
		
	}
	imprimirResultado(resultado);
}
void imprimirResultado(char lista[1000]){
	int i, empezar=0;
	for(i=0; i<1000;i++){
		if(empezar==0){
			if (lista[i]!=0 && lista[i]!=48){
				empezar=1;
			}
		}
		if (empezar==1){
			printf("%c",lista[i]);
		}
	}
	if (empezar==0){
		printf("%c",48);
	}
	printf("\n");
}
int contarCeros(char lista[1000]){
	int numeroCerosIzquierda=0,i;
	for(i=0; i<strlen(lista)&& lista[i]=='0';i++){
		numeroCerosIzquierda+=1;
	}
	return numeroCerosIzquierda;
}
void imprimirNumero(char lista[1000]){
	
	int i, empezar=0;
	for(i=0; i<strlen(lista);i++){
		if(empezar==0){
			if (lista[i]!=0){
				empezar=1;
			}
		}
		if (empezar==1){
			printf("%c",lista[i]);
		}
	}
	printf("\n");
}
 int main(){
 	int casos,cerosIzquierdaLista1,cerosIzquierdaLista2;
 	scanf("%d",&casos);
 	while (casos>0){
 		char linea1[1000];
		char linea2[1000];
		scanf("%s",&linea1);
		scanf("%s",&linea2);
		cerosIzquierdaLista1=contarCeros(linea1);
		cerosIzquierdaLista2=contarCeros(linea2);
		if(cerosIzquierdaLista2!=strlen(linea2)){
			restar(linea1,linea2,cerosIzquierdaLista1,cerosIzquierdaLista2);
			printf("\n");
		}else{
			if (cerosIzquierdaLista1 == strlen(linea1)){
				printf("0");
				printf("\n");	
			}else{
				imprimirNumero(linea1);
			}
		}
		casos--;
	}
	return 0;
 }
