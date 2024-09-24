#include <stdio.h>

int main() {
    float kmh , ms ;


    printf("Entrez la distance en kmh : ");
    scanf("%f", kmh);


    ms = kmh * 0.27778;


    printf("La distance en ms est : %.2f ms\n", ms);

    return 0;
}

