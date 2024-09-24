#include <stdio.h>

int main(){

    char nom [25];
    char prenom [25];
    int age ;
    char sexe ;
    char email [120];



    printf("entrez votre nom: ");
    scanf("%s",nom);
    printf("entrez votre prenom: ");
    scanf("%s",prenom);
    printf("entrez votre age: ");
    scanf("%d",&age);
    printf("Entrez votre sexe (M/F): ");
    scanf(" %c", &sexe);
    printf("entrez votre email: ");
    scanf("%s",email);



    printf("nom: %s\n prenom: %s\n age: %d\n sexe: %c\n email: %s",nom,prenom,age,sexe,email);

}
