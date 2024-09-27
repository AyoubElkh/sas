#include <stdio.h>

int main(){

int mill;
int cent;
int diz;
int unit;
int numero;

    printf("entre le numero" );
    scanf("%d",&numero);

    mill = numero / 1000;
    cent = (numero / 100)% 10;
    diz  = (numero / 10)% 10;
    unit = numero % 10;

printf("inverserNombre : %d%d%d%d \n",unit,diz,cent,mill);



}
