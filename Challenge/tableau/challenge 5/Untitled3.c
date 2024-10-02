#include <stdio.h>

void main() {


    int n, i;


    printf("Entrez le nombre delements dans le tableau : ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Le nombre d'elements doit etre positif.\n");
    }

    int tableau[n];


    printf("Entrez les %d elements du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    int max = tableau[0];

    for (i = 1; i < n; i++) {
        if (tableau[i] < max) {
            max = tableau[i];
        }
    }


    printf("Le plus petit element du tableau est : %d\n", max);

    return 0;

}
