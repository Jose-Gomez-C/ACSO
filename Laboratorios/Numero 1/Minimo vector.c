
#include<stdio.h>
int main(){
        float vector[10];
        float minimo = 1000000000000000000;
        printf("introduzca los valores del arreglo recuerde que solo son 10 datos\n");
        int i;
        for (i=0;i<10;i++){
                printf("Dato numero %d ",i+1);
                scanf("%f",&vector[i]);
                if(minimo>vector[i]){minimo=vector[i];}
        }
        printf("El valor minimo es: %f\n",minimo);
        return 0;
}

