#include <stdio.h>

int main() {
    float c, k;

    printf("Entrez la température en C : ");
    scanf("%f", &c);


    k= c + 273.15;


    printf("La température en K est : %.2f K\n", k);

    return 0;
}

