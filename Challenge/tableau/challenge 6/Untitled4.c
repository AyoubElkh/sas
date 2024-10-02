#include <stdio.h>

void main(){


int i,n,f;

    printf("Entrez le nombre d'elements:");
    scanf("%d",&n);

    int t[n];

printf("Entrez les elements du tableau :\n");
    for(i=0;i<n;i++){
        printf("%d :",i+1);
        scanf("%d",&t[i]);

    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &f);


    printf("Tableau resultant :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i] * f);
    }
    printf("\n");
}
