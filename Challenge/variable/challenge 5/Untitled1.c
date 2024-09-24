#include <stdio.h>

int main() {

    double a,b,somme,difference,multiplier,division;

    printf("nombre de a");
    scanf("%lf",&a);
    printf("nombre de b");
    scanf("%lf",&b);

    somme = a+b;
    difference = a-b;
    multiplier = a*b;
    division = a/b;

    printf("a+b = %lf \n",somme);
    printf("a-b = %lf \n",difference);
    printf("a*b = %lf \n",multiplier);
    printf("a/b = %lf \n",division);




}

