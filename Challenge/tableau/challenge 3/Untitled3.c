#include <stdio.h>

void main(){


int i,n;
int sum=0;

    printf("Entrez le nombre d'elements:");
    scanf("%d",&n);

    int t[n];

printf("Entrez les elements du tableau :\n");
    for(i=0;i<n;i++){
        printf("%d :",i+1);
        scanf("%d",&t[i]);

        sum=sum+t[i];

    }


    printf("la somme :%d",sum);
}
