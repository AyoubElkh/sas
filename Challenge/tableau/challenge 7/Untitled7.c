#include <stdio.h>

void main(){
    int n;


    printf("Entrez le nombre d'elements:");
    scanf("%d",&n);

    int tab[n];

    printf("entre les elements de tableau: \n");

    for (int i = 0; i < n; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] < tab[j + 1]) {

                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    printf("Tableau troi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", tab[i]);
    }






}
