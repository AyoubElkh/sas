#include <stdio.h>

int main() {
    float c, k;

    printf("Entrez la temp�rature en C : ");
    scanf("%f", &c);


    k= c + 273.15;


    printf("La temp�rature en K est : %.2f K\n", k);

    return 0;
}

