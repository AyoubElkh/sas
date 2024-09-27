#include <stdio.h>
int main() {
    int i , var, nombre;
    printf("entre le nombre: ");
    scanf("%d",&nombre);

    var=1;
    for(i=2;i<=nombre;i++){
    var=var*i;};
    printf("%d",var);

     }


